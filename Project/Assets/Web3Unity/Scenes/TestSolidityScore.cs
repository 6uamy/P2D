
using UnityEngine;
using UnityEngine.UI;
using System.Threading.Tasks;
using TMPro;

public class TestSolidityScore : MonoBehaviour
{
    public InputField input;
    public TMP_Text firstRank;
    public TMP_Text secondtRank;
    public TMP_Text thirdRank;
    public TMP_Text fourthRank;
    public TMP_Text fifthRank;

    public TMP_Text address;

    public Text data;
   
    public Text balanceTxt;

    public Button Donatebtn;
    public Button Rankbtn;
    public Button GetTokenbtn;

    private float TimeLeft = 1.0f;
    private float NextTime = 0.0f;

    // 프로젝트 시작시
    public void Start()
    {
        var myaddress = PlayerPrefs.GetString("Account");
        address.text = myaddress;
    }

    // 1초마다 Rank 새로고침
    async void Update()
    {
        if (Time.time > NextTime)
        {
            NextTime = Time.time + TimeLeft;
            await Refresh();
        }

    }

    // 스마트계약에서 실행된 score Rank 나열(get)
    async Task Refresh()
    {
        decimal dee = 1000000000000000000;
        var address = PlayerPrefs.GetString("Account");

        string chain = "ethereum";
        // set network mainnet, testnet
        string network = "rinkeby";

        var ABI = "[{\"inputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"constructor\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"AddedToWhitelist\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Approval\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"RemovedFormWhitelist\",\"type\":\"event\"},{\"anonymous\":false,\"inputs\":[{\"indexed\":true,\"internalType\":\"address\",\"name\":\"from\",\"type\":\"address\"},{\"indexed\":true,\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"indexed\":false,\"internalType\":\"uint256\",\"name\":\"value\",\"type\":\"uint256\"}],\"name\":\"Transfer\",\"type\":\"event\"},{\"inputs\":[],\"name\":\"_addr\",\"outputs\":[{\"internalType\":\"address payable\",\"name\":\"\",\"type\":\"address\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"\",\"type\":\"address\"}],\"name\":\"_userscore\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"_addr\",\"type\":\"address\"}],\"name\":\"add_Whitelist\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"owner\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"}],\"name\":\"allowance\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"amount\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"approve\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"account\",\"type\":\"address\"}],\"name\":\"balanceOf\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"decimals\",\"outputs\":[{\"internalType\":\"uint8\",\"name\":\"\",\"type\":\"uint8\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"subtractedValue\",\"type\":\"uint256\"}],\"name\":\"decreaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"_number\",\"type\":\"uint256\"}],\"name\":\"getUserScore\",\"outputs\":[{\"internalType\":\"address\",\"name\":\"user_addr\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"user_score\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"spender\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"addedValue\",\"type\":\"uint256\"}],\"name\":\"increaseAllowance\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"_address\",\"type\":\"address\"}],\"name\":\"isWhitelisted\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"name\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"_address\",\"type\":\"address\"}],\"name\":\"remove_whitelist\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"_score\",\"type\":\"uint256\"}],\"name\":\"reward\",\"outputs\":[],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"score\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"_value\",\"type\":\"uint256\"}],\"name\":\"send\",\"outputs\":[],\"stateMutability\":\"payable\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"symbol\",\"outputs\":[{\"internalType\":\"string\",\"name\":\"\",\"type\":\"string\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"name\":\"topScores\",\"outputs\":[{\"internalType\":\"address\",\"name\":\"addr\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"score\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[],\"name\":\"totalSupply\",\"outputs\":[{\"internalType\":\"uint256\",\"name\":\"\",\"type\":\"uint256\"}],\"stateMutability\":\"view\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transfer\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"},{\"inputs\":[{\"internalType\":\"address\",\"name\":\"from\",\"type\":\"address\"},{\"internalType\":\"address\",\"name\":\"to\",\"type\":\"address\"},{\"internalType\":\"uint256\",\"name\":\"amount\",\"type\":\"uint256\"}],\"name\":\"transferFrom\",\"outputs\":[{\"internalType\":\"bool\",\"name\":\"\",\"type\":\"bool\"}],\"stateMutability\":\"nonpayable\",\"type\":\"function\"}]";
        var contract = "0x8cEdbB2dDf799d486ef4544663AAC7092547f55e";

        // smart contract method to call
        string method = "getUserScore";
        string method2 = "balanceOf";
        string firstArg = "[\"0\"]";
        string secondArg = "[\"1\"]";
        string thirdArg = "[\"2\"]";
        string fourthArg = "[\"3\"]";
        string fifthArg = "[\"4\"]";
        string account = "[\"" + address + "\"]";
        // connects to user's browser wallet to call a transaction
        string first = await EVM.Call(chain, network, contract, ABI, method, firstArg);
        string second = await EVM.Call(chain, network, contract, ABI, method, secondArg);
        string third = await EVM.Call(chain, network, contract, ABI, method, thirdArg);
        string fourth = await EVM.Call(chain, network, contract, ABI, method, fourthArg);
        string fifth = await EVM.Call(chain, network, contract, ABI, method, fifthArg);
        string balance = await EVM.Call(chain, network, contract, ABI, method2, account);

        // " 기준으로 문자열 자르는 과정
        char sp = '"';

        // 나누어진 문자열을 배열에 저장
        string[] firstStr = first.Split(sp);
        string[] secondStr = second.Split(sp);
        string[] thirdStr = third.Split(sp);
        string[] fourthStr = fourth.Split(sp);
        string[] fifthStr = fifth.Split(sp);

        // 필요한 문자열만 추출
        try
        {
            firstRank.text = firstStr[3] + "    " + firstStr[7];
            secondtRank.text = secondStr[3] + "    " + secondStr[7];
            thirdRank.text = thirdStr[3] + "    " + thirdStr[7];
            fourthRank.text = fourthStr[3] + "    " + fourthStr[7];
            fifthRank.text = fifthStr[3] + "    " + fifthStr[7];
        }
        catch
        {
            firstRank.text = "UnRanked";
            secondtRank.text = "UnRanked";
            thirdRank.text = "UnRanked";
            fourthRank.text = "UnRanked";
            fifthRank.text = "UnRanked";
        }

        try
        {
            balanceTxt.text = (decimal.Parse(balance) / dee).ToString();
        }
        catch
        {
            balanceTxt.text = "0";
        }
    }
}
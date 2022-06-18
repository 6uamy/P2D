// SPDX-License-Identifier: MIT
pragma solidity 0.8.6;
 
import "https://github.com/0xcert/ethereum-erc721/src/contracts/tokens/nf-token-metadata.sol";
import "https://github.com/0xcert/ethereum-erc721/src/contracts/ownership/ownable.sol";
 
contract P2DNFT is NFTokenMetadata, Ownable {
 
  uint count = 1;

  constructor() {
    nftName = "PlaytoDonate NFT";
    nftSymbol = "P2D";
  }
 
  function mintNFT(string calldata _uri) external onlyOwner {
    super._mint(msg.sender, count);
    super._setTokenUri(count, _uri);
    count++;
  }
}

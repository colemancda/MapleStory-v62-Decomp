/* FUN_0086db60 - 0x0086db60 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086db60(void)

{
  short sVar1;
  int iVar2;
  SOCKET s;
  hostent *phVar3;
  int *buf;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  sockaddr local_1a0;
  WSADATA local_190;
  
  iVar2 = WSAStartup(0x202,&local_190);
  if (iVar2 != 0) {
    return 0;
  }
  s = socket(2,2,0);
  if (s == 0xffffffff) {
    return 0;
  }
  local_1a0.sa_family = 2;
  local_1a0.sa_data._0_2_ = ntohs(15000);
  local_1a0.sa_data._2_4_ = inet_addr(&DAT_0097fb60);
  if (local_1a0.sa_data._2_4_ == 0xffffffff) {
    phVar3 = gethostbyname(&DAT_0097fb60);
    if (phVar3 == (hostent *)0x0) {
      closesocket(s);
      return 0;
    }
    sVar1 = phVar3->h_length;
    pcVar5 = *phVar3->h_addr_list;
    pcVar6 = local_1a0.sa_data + 2;
    for (uVar4 = (uint)(int)sVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = (int)sVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  buf = (int *)FUN_00873df0();
  if (buf != (int *)0x0) {
    iVar2 = sendto(s,(char *)buf,*buf + 4,0,&local_1a0,0x10);
    if (iVar2 == 0) {
      closesocket(s);
      return 0;
    }
    if (iVar2 != -1) {
      closesocket(s);
      return 1;
    }
    closesocket(s);
    return 0;
  }
  closesocket(s);
  return 0;
}



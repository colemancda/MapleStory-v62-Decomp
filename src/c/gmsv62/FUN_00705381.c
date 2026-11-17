/* FUN_00705381 - 0x00705381 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00705381(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0047c974(*(undefined4 *)(param_1 + 0x554),&local_c,&local_8,param_1 + 0x570);
  uVar5 = 1;
  uVar4 = 0;
  uVar3 = 1;
  uVar2 = 10;
  iVar1 = FUN_007052e6(10,1,0,1);
  FUN_0081420c(local_c,local_8,0xdf,iVar1 + 0x1e,uVar2,uVar3,uVar4,uVar5);
  *(undefined4 *)(param_1 + 0x5fc) = 1;
  FUN_00705297(1);
  return;
}



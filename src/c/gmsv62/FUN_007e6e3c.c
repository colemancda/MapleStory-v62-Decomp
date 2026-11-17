/* FUN_007e6e3c - 0x007e6e3c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007e6e3c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(param_1 + 0x90);
  iVar4 = DAT_0096c3c0 - iVar2 / 2;
  iVar3 = DAT_0096c3c4 - iVar1 / 2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (800 - iVar2 < iVar4) {
    iVar4 = 800 - iVar2;
  }
  if (600 - iVar1 < iVar3) {
    iVar3 = 600 - iVar1;
  }
  _OOBECompleteWnfWaitCallback_28(iVar4,iVar3,iVar2,iVar1,10,1,0);
  return;
}



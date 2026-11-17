/* FUN_006b7056 - 0x006b7056 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006b7056(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = DAT_0096aa10 - iVar1 / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (800 - iVar1 < iVar2) {
    iVar2 = 800 - iVar1;
  }
  iVar4 = 600 - *(int *)(param_1 + 0x8c);
  iVar3 = 0;
  if (iVar4 < 0) {
    iVar3 = iVar4;
  }
  _OOBECompleteWnfWaitCallback_28(iVar2,iVar3,iVar1,*(int *)(param_1 + 0x8c),10,1,0);
  return;
}



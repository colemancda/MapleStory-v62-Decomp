/* FUN_10008cf0 - 0x10008cf0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall FUN_10008cf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000c5cb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  iVar4 = 0;
  ExceptionList = &pvStack_c;
  do {
    iVar1 = *(int *)(param_1 + 0x1c + iVar4 * 4);
    while (iVar2 = iVar1, iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + -8);
      if ((int *)(iVar2 + -8) != (int *)0x0) {
        uVar3 = (*DAT_10016c7c)(0,iVar2 + -0xc);
        (*DAT_10016c78)(uVar3);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  ExceptionList = pvStack_c;
  return;
}



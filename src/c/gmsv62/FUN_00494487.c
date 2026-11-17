/* FUN_00494487 - 0x00494487 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00494487(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  int iStack_20;
  undefined4 local_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar2 = DAT_00978368;
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_1c = 0x4944af;
  iVar1 = FUN_0045e2eb();
  if (iVar1 / 10000 == 0x38e) {
    iStack_20 = 10000;
    local_1c = *(undefined4 *)(unaff_EBP + 0xc);
    *(int **)(unaff_EBP + -0x14) = &iStack_20;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + 0xc) + 4));
    }
    iVar1 = FUN_004945b5();
    if ((iVar1 != 2) && (iVar1 != *(int *)(iVar2 + 0x202c))) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = *(int *)(unaff_EBP + 0xc);
      goto LAB_0049459a;
    }
    while( true ) {
      iVar2 = *(int *)(unaff_EBP + 0xc);
      iVar1 = *(int *)(iVar2 + 0x5c);
      if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar3)) break;
      local_1c = *(undefined4 *)(iVar1 + uVar3 * 4);
      iStack_20 = unaff_EBP + -0x1c;
      FUN_0084a5e4();
      local_1c = 1;
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffdc;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0045e0ed(unaff_EBP + -0x1c);
      iVar2 = FUN_00494214();
      if (iVar2 != 0) {
        *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x210) + 0x4dc) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        local_1c = 0;
        iStack_20 = 0x49456d;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      uVar3 = uVar3 + 1;
    }
  }
  else {
    local_1c = 0;
    iStack_20 = 10000;
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffdc;
    FUN_0045e0ed(unaff_EBP + 8);
    FUN_00494214();
    iVar2 = *(int *)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0049459a:
  if (iVar2 != 0) {
    local_1c = 0;
    iStack_20 = 0x4945a5;
    FUN_0045e794();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



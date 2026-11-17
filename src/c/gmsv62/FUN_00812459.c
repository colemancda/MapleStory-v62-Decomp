/* FUN_00812459 - 0x00812459 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00812459(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 10) {
    if (DAT_00979178 != 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0x21000003;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x14,&DAT_00903698);
    }
    iVar2 = FUN_004029b9(0x5c8);
    *(int *)(unaff_EBP + -0x18) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_00811063();
    }
    iVar2 = *piVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    (**(code **)(iVar2 + 0x3c))(*(undefined4 *)(unaff_EBP + 0xc));
  }
  else if (iVar2 == 0xf) {
    if (DAT_00979178 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))(&DAT_0097c214);
      uVar3 = -(uint)(iVar2 != 0) & DAT_00979178;
    }
    if (uVar3 != 0) {
      if (*(int *)(uVar3 + 0xd4) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -0x10) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00903698);
      }
      iVar2 = *(int *)(uVar3 + 0xd0);
      *(undefined4 *)(uVar3 + 0xd4) = 0;
      if ((0 < iVar2) && (iVar2 < 6)) {
        if (*(int *)(*(int *)(uVar3 + 0x8c) + 0x3c) != iVar2) {
          FUN_004b2699(iVar2 + -1);
        }
        iVar2 = *(int *)(*(int *)(uVar3 + 0x9c) + 0x38);
        iVar4 = FUN_0080f393();
        if (iVar4 < iVar2) {
          FUN_004acfe9(iVar4);
        }
        if (iVar2 + 4 < iVar4) {
          FUN_004acfe9(iVar4 + -4);
        }
        uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
        *(int *)(uVar3 + 200) = iVar4;
        FUN_0081124f(uVar1);
        FUN_008161f1(0);
      }
    }
  }
  else if (iVar2 == 0x10) {
    if (DAT_00979178 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))(&DAT_0097c214);
      uVar3 = -(uint)(iVar2 != 0) & DAT_00979178;
    }
    if (uVar3 != 0) {
      if (*(int *)(uVar3 + 0xd4) == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x21000003;
        *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
        *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(unaff_EBP + 8,&DAT_00903698);
      }
      *(undefined4 *)(uVar3 + 0xd4) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



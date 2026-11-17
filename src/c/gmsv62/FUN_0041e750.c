/* FUN_0041e750 - 0x0041e750 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0041e750(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  iVar1 = DAT_00973ab4;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  if (iVar3 == 1) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 0x200);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 0x204);
    iVar3 = FUN_004029b9(0x144);
    *(int *)(unaff_EBP + 0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      DAT_00973ab8 = (int *)0x0;
    }
    else {
      DAT_00973ab8 = (int *)FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),
                                         *(undefined4 *)(DAT_00973ab4 + 0x20c),unaff_EBP + -0x1c);
    }
    iVar3 = DAT_00973ab4;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004524da(iVar3);
    FUN_004526dc(1);
    iVar3 = *(int *)(DAT_00973ab4 + 0x208) * 1000;
    uVar2 = 0xaa;
LAB_0041e8b1:
    (*DAT_0097b520)(*(undefined4 *)(unaff_EBP + 8),uVar2,iVar3,0);
  }
  else if (iVar3 == 2) {
    if (DAT_00973ab8 != (int *)0x0) {
      (**(code **)(*DAT_00973ab8 + 0x24))(1);
    }
    (*DAT_0097b514)(0);
  }
  else {
    if (iVar3 == 0x10) {
      FUN_004526dc(0);
    }
    else {
      if (iVar3 == 0x84) {
        uVar2 = 1;
        goto LAB_0041e8bc;
      }
      if (iVar3 == 0x100) {
        if (*(int *)(unaff_EBP + 0x10) != 0x1b) goto LAB_0041e8ba;
      }
      else {
        if (iVar3 != 0x113) {
          if (iVar3 != 0x400) {
            uVar2 = (*DAT_0097b510)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                                    *(undefined4 *)(unaff_EBP + 0x10),
                                    *(undefined4 *)(unaff_EBP + 0x14));
            goto LAB_0041e8bc;
          }
          iVar3 = 10;
          uVar2 = 0xff;
          goto LAB_0041e8b1;
        }
        if (*(int *)(unaff_EBP + 0x10) == 0xff) {
          (*DAT_0097b51c)(*(undefined4 *)(unaff_EBP + 8),0xff);
        }
        (*DAT_0097b51c)(*(undefined4 *)(unaff_EBP + 8),0xaa);
      }
    }
    (*DAT_0097b518)(*(undefined4 *)(unaff_EBP + 8));
  }
LAB_0041e8ba:
  uVar2 = 0;
LAB_0041e8bc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



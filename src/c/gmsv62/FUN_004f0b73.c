/* FUN_004f0b73 - 0x004f0b73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f0b73(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = DAT_00978368;
  piVar1 = *(int **)(extraout_ECX + 0x13c);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if ((piVar1 != (int *)0x0) && (piVar1[-1] != 0)) {
    if ((*(int *)(iVar3 + 0x2b40) == 0) && ((piVar1 != (int *)0x0 && (piVar1[-1] != 0)))) {
      (*DAT_0097b504)(unaff_EBP + -0x54,*piVar1 + -0x14,piVar1[1] + -0x32,*piVar1 + 0x14,
                      piVar1[1] + 0x32);
      iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x54,*(undefined4 *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar4 != 0) {
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar3 + 0x2b2c);
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar3 + 0x2b30);
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar3 + 0x2b34);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 0x2b38);
        iVar4 = FUN_004f162d();
        if (((*(int *)(unaff_EBP + -0x24) == iVar4) && (*(int *)(unaff_EBP + -0x20) != 0)) &&
           (*(int *)(unaff_EBP + -0x20) != 999999999)) {
          *(undefined4 *)(iVar3 + 0x208c) = 1;
          uVar5 = FUN_007d1e08();
          *(undefined4 *)(iVar3 + 0x2090) = uVar5;
          FUN_0060142b(0x79,0,0);
          uVar5 = *(undefined4 *)(iVar3 + 0x2088);
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_00457d37(uVar5);
          FUN_00457cda(1);
          FUN_004751b2(unaff_EBP + -0x34);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045ebca();
        }
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(int *)(unaff_EBP + -0x14) = iVar3 + 0x2b44;
      uVar6 = 0;
      while ((iVar4 = *(int *)(extraout_ECX + 0x13c), iVar4 != 0 && (uVar6 < *(uint *)(iVar4 + -4)))
            ) {
        piVar1 = (int *)(iVar4 + uVar6 * 8);
        iVar4 = piVar1[1];
        iVar2 = *piVar1;
        (*DAT_0097b504)(unaff_EBP + -100,iVar2 + -0x14,iVar4 + -0x32,iVar2 + 0x14,iVar4 + 0x32);
        iVar4 = (*DAT_0097b57c)(unaff_EBP + -100,*(undefined4 *)(unaff_EBP + 8),
                                *(undefined4 *)(unaff_EBP + 0xc));
        if (iVar4 != 0) {
          iVar4 = FUN_0085c6e1(*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x24);
          if (iVar4 != 0) {
            iVar4 = FUN_004f162d();
            if (((*(int *)(unaff_EBP + -0x24) == iVar4) && (*(int *)(unaff_EBP + -0x20) != 0)) &&
               (*(int *)(unaff_EBP + -0x20) != 999999999)) {
              *(undefined4 *)(iVar3 + 0x208c) = 1;
              uVar5 = FUN_007d1e08();
              *(undefined4 *)(iVar3 + 0x2090) = uVar5;
              FUN_0060142b(0x79,0,0);
              uVar5 = **(undefined4 **)(unaff_EBP + -0x14);
              *(undefined4 *)(unaff_EBP + -4) = 1;
              FUN_00457d37(uVar5);
              FUN_00457cda(1);
              FUN_004751b2(unaff_EBP + -0x44);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_0045ebca();
            }
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
        uVar6 = *(uint *)(unaff_EBP + -0x10);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



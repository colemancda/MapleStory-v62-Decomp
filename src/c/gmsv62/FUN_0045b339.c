/* FUN_0045b339 - 0x0045b339 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045b339(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_2c = 0x99;
    uStack_30 = 0x45b35c;
    FUN_00464f0d();
  }
  else if ((*(int *)(extraout_ECX + 0x18) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    iStack_2c = unaff_EBP + 8;
    uStack_30 = 0x45b37e;
    iVar1 = FUN_0045c1e1();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      piVar2 = (int *)(extraout_ECX + 0x49c);
      do {
        if (*piVar2 == 0) break;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        piVar2 = piVar2 + 1;
      } while (*(int *)(unaff_EBP + -0x10) < 10);
      if (*(int *)(unaff_EBP + -0x10) == 10) {
        uStack_30 = 1;
        *(undefined1 **)(unaff_EBP + -0x18) = auStack_3c;
        uVar4 = 0x21d;
      }
      else {
        iStack_2c = *(undefined4 *)(unaff_EBP + 8);
        uStack_30 = 0x45b3c3;
        iVar3 = FUN_0045d3dd();
        if (iVar3 < 0) {
          piVar2 = (int *)(DAT_00978368 + 0x3278);
          if (*(int *)(*(int *)(*piVar2 + 4 + iVar1 * 8) + 0x20) != 0) {
            iStack_2c = 0;
            uStack_30 = 0;
            uStack_34 = 0xc6;
            uStack_38 = 0x45b41c;
            FUN_0060142b();
            *(undefined4 *)(unaff_EBP + -4) = 0;
            iStack_2c = 5;
            uStack_30 = 0x45b42a;
            FUN_00457cda();
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x49c;
            do {
              if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBP + -0x14)) {
                iStack_2c = *(undefined4 *)(*(int *)(*piVar2 + 4 + iVar1 * 8) + 0xc);
              }
              else {
                iStack_2c = **(undefined4 **)(unaff_EBP + -0x18);
              }
              uStack_30 = 0x45b457;
              FUN_00457d37();
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
            } while (*(int *)(unaff_EBP + -0x14) < 10);
            iStack_2c = unaff_EBP + -0x28;
            uStack_30 = 0x45b473;
            FUN_004751b2();
            *(undefined4 *)(extraout_ECX + 0x4c8) = 0;
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            *(undefined4 *)(extraout_ECX + 0x18) = 1;
            iStack_2c = 0x45b48d;
            FUN_0045ebca();
          }
          goto LAB_0045b48d;
        }
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + -0x18) = auStack_3c;
        uVar4 = 0x21c;
      }
      iStack_2c = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      FUN_00679d22(auStack_3c,uVar4);
      FUN_007db3ad();
    }
  }
LAB_0045b48d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



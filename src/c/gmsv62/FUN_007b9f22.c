/* FUN_007b9f22 - 0x007b9f22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b9f22(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *extraout_ECX;
  int unaff_EBP;
  int *piVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  iVar2 = FUN_007b04b6();
  if (iVar2 != 0) goto LAB_007ba212;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00455c59(unaff_EBP + -0x14);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_0045e7c2(0);
    }
    uVar3 = (**(code **)(*extraout_ECX + 4))();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    if ((undefined *)**(undefined4 **)(unaff_EBP + 8) != &DAT_004e23ea) goto LAB_007b9fc1;
    iVar2 = FUN_006158e9();
    if (((iVar2 != 0) || (iVar2 = FUN_00615923(), iVar2 != 0)) ||
       (cVar1 = (**(code **)(**(int **)(*(int *)(unaff_EBP + -0x10) + 0x958) + 4))(), cVar1 == '\0')
       ) goto LAB_007ba212;
LAB_007ba25e:
    uVar3 = 0;
    uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
    piVar6 = *(int **)(unaff_EBP + 8);
LAB_007ba0f3:
    uVar3 = FUN_007a93ea(piVar6,uVar7,uVar3,0,0,0);
    goto LAB_007ba214;
  }
LAB_007b9fc1:
  iVar2 = **(int **)(unaff_EBP + 8);
  if ((iVar2 == 0x3ee1ab) || (iVar2 == 0x40684b)) {
    FUN_00486ada(unaff_EBP + -0x10);
    piVar6 = *(int **)(unaff_EBP + -0x10);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    iVar2 = FUN_006158e9();
    if ((iVar2 == 0) && (iVar2 = FUN_00615923(), iVar2 == 0)) goto LAB_007ba25e;
  }
  else {
    iVar4 = extraout_ECX[0x129];
    iVar2 = iVar2 / 1000000;
    *(int *)(unaff_EBP + -0x10) = iVar2;
    iVar4 = FUN_0044dddc(iVar4);
    if (((iVar2 == 3) && ((iVar4 == 0x2d || (iVar4 == 0x2e)))) ||
       (((iVar2 == 4 && (iVar4 == 0x2f)) || ((iVar2 == 5 && (iVar4 == 0x31)))))) {
      iVar2 = FUN_00732f96(extraout_ECX[0x129]);
      if (iVar2 == 0) {
        piVar6 = *(int **)(unaff_EBP + 8);
      }
      else {
        piVar6 = *(int **)(unaff_EBP + 8);
        iVar2 = FUN_007a22a3(piVar6,*(undefined4 *)(unaff_EBP + 0xc),0,0,0);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*extraout_ECX + 4))();
          iVar2 = FUN_00413367(iVar2 + 0x2b8,*(undefined4 *)(iVar2 + 0x2c0));
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*extraout_ECX + 4))();
            iVar2 = FUN_00413367(iVar2 + 0x654,*(undefined4 *)(iVar2 + 0x65c));
            if ((iVar2 == 0) && ((piVar6 == (int *)0x0 || (*piVar6 != 0x3eba9c))))
            goto LAB_007ba102;
          }
        }
        if ((extraout_ECX[0x14b] & 0xfffffffeU) != 10) {
          iVar2 = *piVar6;
          if ((((iVar2 == 0x2f785c) || (iVar2 == 0x30fefc)) || (iVar2 == 0x4f837d)) ||
             ((iVar2 == 0x4f837c || (iVar2 == 0x4f5c6e)))) {
            uVar3 = 0;
          }
          else {
            iVar2 = FUN_007a71f1(0,0,unaff_EBP + 8,0,0,0,0);
            if (iVar2 != 0) goto LAB_007ba212;
            uVar3 = *(undefined4 *)(unaff_EBP + 8);
          }
          uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
          goto LAB_007ba0f3;
        }
      }
LAB_007ba102:
      iVar2 = (**(code **)(*extraout_ECX + 4))();
      iVar2 = FUN_00413367(iVar2 + 0x2b8,*(undefined4 *)(iVar2 + 0x2c0));
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*extraout_ECX + 4))();
        iVar2 = FUN_00413367(iVar2 + 0x654,*(undefined4 *)(iVar2 + 0x65c));
        if (((iVar2 == 0) &&
            (iVar2 = FUN_007a22a3(piVar6,*(undefined4 *)(unaff_EBP + 0xc),0,0,0), iVar2 == 0)) &&
           (uVar5 = FUN_0043f6fe(), 0x7fffffff < uVar5)) {
          if (*(int *)(unaff_EBP + -0x10) == 3) {
            uVar3 = FUN_00679d22(unaff_EBP + 8,0xad9);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_00471102(uVar3,0xc);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else if (*(int *)(unaff_EBP + -0x10) == 4) {
            uVar3 = FUN_00679d22(unaff_EBP + 8,0xada);
            *(undefined4 *)(unaff_EBP + -4) = 1;
            FUN_00471102(uVar3,0xc);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          else {
            if (*(int *)(unaff_EBP + -0x10) != 5) goto LAB_007ba204;
            uVar3 = FUN_00679d22(unaff_EBP + 0xc,0xad3);
            *(undefined4 *)(unaff_EBP + -4) = 2;
            FUN_00471102(uVar3,0xc);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          }
          FUN_00414ebb();
        }
      }
LAB_007ba204:
      FUN_007a71f1(0,0,0,0,0,0,0);
    }
  }
LAB_007ba212:
  uVar3 = 0;
LAB_007ba214:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



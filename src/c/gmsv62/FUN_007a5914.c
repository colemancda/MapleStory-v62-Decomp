/* FUN_007a5914 - 0x007a5914 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a5914(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  iVar1 = FUN_004becbc(200,0);
  if (iVar1 == 0) goto LAB_007a5b0b;
  iVar1 = FUN_007b3bb4();
  if (iVar1 != 0) goto LAB_007a5b0b;
  iVar1 = FUN_007a3f46();
  if ((iVar1 != 0) || (extraout_ECX[0x799] != 0)) goto LAB_007a5b0b;
  iVar1 = FUN_007b3c5d();
  if (iVar1 != 0) goto LAB_007a5b0b;
  iVar1 = FUN_0043fb62();
  if ((iVar1 != 0) || (extraout_ECX[0x13d] != 0)) {
    uVar6 = FUN_00679d22(unaff_EBP + -0x14,0xd8b);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar6,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    goto LAB_007a5b0b;
  }
  iVar1 = FUN_0043fb93();
  if (iVar1 == 0) {
    iVar1 = FUN_007b3ba0();
    if (iVar1 != 0) {
      FUN_007bd2b0(&LAB_004c4f2d);
    }
    piVar2 = (int *)FUN_00429303();
    iVar1 = (**(code **)(*piVar2 + 0x18))();
    if (iVar1 != 0) goto LAB_007a5b0b;
    iVar1 = FUN_006353e2();
    if (iVar1 != 0) goto LAB_007a5b0b;
    iVar1 = FUN_004bed04();
    if (iVar1 == 0) {
      iVar1 = FUN_007b04b6();
      if (iVar1 != 0) goto LAB_007a5b0b;
      iVar1 = FUN_00732f96(extraout_ECX[0x129]);
      if (iVar1 != 0) {
        iVar1 = FUN_007a22a3(0,0,0,0,0);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*extraout_ECX + 4))();
          iVar1 = FUN_00413367(iVar1 + 0x2b8,*(undefined4 *)(iVar1 + 0x2c0));
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*extraout_ECX + 4))();
            iVar1 = FUN_00413367(iVar1 + 0x654,*(undefined4 *)(iVar1 + 0x65c));
            if (iVar1 == 0) goto LAB_007a5acf;
          }
        }
        if ((extraout_ECX[0x14b] & 0xfffffffeU) != 10) {
          iVar1 = FUN_007a71f1(0,0,unaff_EBP + -0x10,0,0,0,0);
          if (iVar1 == 0) {
            FUN_007a93ea(0,0,*(undefined4 *)(unaff_EBP + -0x10),0,0,0);
          }
          goto LAB_007a5b0b;
        }
      }
LAB_007a5acf:
      FUN_007a71f1(0,0,0,0,0,0,0);
      goto LAB_007a5b0b;
    }
    uVar7 = 0x7fffffff;
    uVar5 = 0;
    uVar4 = 6;
    uVar3 = 1;
    uVar6 = FUN_0064d61f(0x3d0ceb);
    FUN_00790b31(uVar6,uVar3,uVar4,uVar5,uVar7);
    FUN_007d3e08(0x3d0ceb,0x1e);
    uVar6 = 0x3d0ceb;
  }
  else {
    uVar6 = 0x4dd5cf;
  }
  FUN_007bd2b0(uVar6);
LAB_007a5b0b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



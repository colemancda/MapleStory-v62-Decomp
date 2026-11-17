/* FUN_007eae99 - 0x007eae99 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eae99(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_004a77eb();
  iVar2 = *(int *)(extraout_ECX + 0xc4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0xffffffff;
  *(int *)(unaff_EBP + -0x14) = iVar2 * 6 + 4;
  iVar2 = *(int *)(extraout_ECX + 200);
  *(undefined4 *)(unaff_EBP + -0x54) = 0xff000000;
  *(int *)(unaff_EBP + -0x10) = iVar2 * 0xc + 2;
  iVar2 = FUN_004029b9(0xcc);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a8730();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00609bca(uVar3);
  FUN_00414f8b(extraout_ECX + 0xac);
  iVar2 = *(int *)(extraout_ECX + 200);
  iVar5 = *(int *)(extraout_ECX + 0xc4);
  *(int *)(unaff_EBP + -0x3c) = iVar5 * 6 + 2;
  *(int *)(unaff_EBP + -0x38) = iVar2;
  *(int *)(unaff_EBP + -0x40) = iVar2 * iVar5;
  uVar3 = FUN_00679e4e(unaff_EBP + -0x1c,10);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x5c) = **(undefined4 **)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (*(int *)(extraout_ECX + 0x9c) == 0) {
    (**(code **)(**(int **)(extraout_ECX + 0x62c) + 8))
              (extraout_ECX,0x3eb,*(int *)(extraout_ECX + 0x78) + 2,
               *(int *)(extraout_ECX + 0x7c) + 5 + *(int *)(extraout_ECX + 0x80),
               *(int *)(unaff_EBP + -0x14) + -2,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x68
              );
    FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x62c));
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x8bb);
    *(undefined4 *)(unaff_EBP + -0x1c) = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8b0);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_007e6c97(unaff_EBP + -0x24,uVar3,*(undefined4 *)(unaff_EBP + -0x1c));
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
              (extraout_ECX,1,*(int *)(extraout_ECX + 0x1c) + -0x36,
               *(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x30);
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8bd);
    *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x8b0);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_007e6c97(unaff_EBP + -0x24,uVar3,*(undefined4 *)(unaff_EBP + -0x20));
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
              (extraout_ECX,2,9,*(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x30);
    if (*(int *)(extraout_ECX + 0x60) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = *(int *)(unaff_EBP + -0x14);
    piVar1 = *(int **)(extraout_ECX + 0x60);
    iVar5 = *piVar1;
    *(int *)(unaff_EBP + -0x20) = *(int *)(extraout_ECX + 0x7c) + 2 + *(int *)(extraout_ECX + 0x80);
    iVar5 = (**(code **)(iVar5 + 0x8c))
                      (piVar1,*(int *)(extraout_ECX + 0x78) + -1,*(undefined4 *)(unaff_EBP + -0x20),
                       iVar2 + 3,*(int *)(unaff_EBP + -0x10) + 4,0xff000000);
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,piVar1,&DAT_00963cc8);
    }
    if (*(int *)(extraout_ECX + 0x60) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x60);
    iVar2 = (**(code **)(*piVar1 + 0x8c))
                      (piVar1,*(undefined4 *)(extraout_ECX + 0x78),
                       *(int *)(extraout_ECX + 0x7c) + 3 + *(int *)(extraout_ECX + 0x80),iVar2 + 1,
                       *(int *)(unaff_EBP + -0x10) + 2,0xffffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  else {
    piVar1 = *(int **)(extraout_ECX + 0x62c);
    iVar2 = *(int *)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + -100) = 2;
    *(undefined4 *)(unaff_EBP + -0x60) = 2;
    (**(code **)(*piVar1 + 8))
              (extraout_ECX,0x3eb,0x13,iVar2 + -0x49,*(undefined4 *)(unaff_EBP + -0x14),
               *(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x68);
    FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x62c));
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar3 = FUN_00679d86(unaff_EBP + -0x1c,0x4ed);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
              (extraout_ECX,1,0xb0,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x30);
    uVar3 = FUN_00679d86(unaff_EBP + -0x1c,0x4ee);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00450382(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
              (extraout_ECX,2,0xda,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00608bf3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



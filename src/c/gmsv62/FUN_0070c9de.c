/* FUN_0070c9de - 0x0070c9de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070c9de(void)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0042a39f(unaff_EBP + -0x10,0,0,0,0,0,unaff_EBP + -0x48,unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_0048d19a(uVar3);
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb(iVar4);
  }
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  puVar5 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  uVar3 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_0040ee87(uVar3,1);
  iVar4 = *(int *)(extraout_ECX + 0xbc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(extraout_ECX + 0xbc);
  iVar4 = *piVar2;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  uVar3 = FUN_00679d86(unaff_EBP + -0x18,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x5b0) + 0x20))
            (extraout_ECX,0,*(int *)(extraout_ECX + 0x1c) + -0x10,4,2,unaff_EBP + -0x28);
  FUN_0070dbd4();
  FUN_0060142b(0xcc,0,0);
  uVar1 = *(undefined2 *)(extraout_ECX + 0x68);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0045d247(uVar1);
  FUN_004751b2(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



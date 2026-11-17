/* ptr_0061006e - 0x0061006e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0061006e(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  (**(code **)(*(int *)unaff_ESI[0x2a] + 8))();
  (**(code **)(*(int *)(unaff_ESI[0x2a] + 4) + 0x1c))(0);
  piVar1 = unaff_ESI + 0x27;
  if (unaff_ESI[0x1d] == 0) {
    piVar1 = unaff_ESI + 0x25;
  }
  FUN_008164fd(piVar1[1]);
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x34) = 0x5a;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xe;
  iVar2 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e1ff(uVar3);
  (**(code **)(*(int *)unaff_ESI[0x24] + 0x20))();
  (**(code **)(*(int *)(unaff_ESI[0x24] + 4) + 0x1c))(unaff_ESI[0x1d] == 0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar3);
  (**(code **)(*(int *)unaff_ESI[0x20] + 0x20))();
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar3);
  (**(code **)(*(int *)unaff_ESI[0x22] + 0x20))();
  (**(code **)(*unaff_ESI + 0x2c))(0);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00457a09();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



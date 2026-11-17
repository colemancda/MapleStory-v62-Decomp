/* ptr_00610056 - 0x00610056 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00610056(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int *unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_00679d22(in_EAX);
  uVar4 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00434e21(unaff_EBP + -0x88,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  (**(code **)(*(int *)unaff_ESI[0x2a] + 8))();
  (**(code **)(*(int *)(unaff_ESI[0x2a] + 4) + 0x1c))(0);
  piVar2 = unaff_ESI + 0x27;
  if (unaff_ESI[0x1d] == 0) {
    piVar2 = unaff_ESI + 0x25;
  }
  FUN_008164fd(piVar2[1]);
  FUN_0045621e();
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -0x34) = 0x5a;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xe;
  iVar3 = FUN_004029b9(0x6c);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004562b1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e1ff(uVar4);
  (**(code **)(*(int *)unaff_ESI[0x24] + 0x20))();
  (**(code **)(*(int *)(unaff_ESI[0x24] + 4) + 0x1c))(unaff_ESI[0x1d] == 0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar4);
  (**(code **)(*(int *)unaff_ESI[0x20] + 0x20))();
  uVar4 = FUN_00679d86(unaff_EBP + -0x14,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00450382(uVar4);
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



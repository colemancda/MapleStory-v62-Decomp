/* FUN_0060e54b - 0x0060e54b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060e54b(void)

{
  uint uVar1;
  int *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  undefined4 uStack_1c;
  int *piStack_18;
  
  FUN_00879bb8();
  piStack_18 = (int *)0x60e567;
  (**(code **)(*(int *)extraout_ECX[0x84] + 0xc))();
  piStack_18 = (int *)0x60e572;
  (**(code **)(*(int *)extraout_ECX[0x86] + 0xc))();
  piStack_18 = (int *)0x60e57d;
  (**(code **)(*(int *)extraout_ECX[0x88] + 0xc))();
  piStack_18 = (int *)0x60e58a;
  FUN_00450463();
  piStack_18 = (int *)0x60e597;
  FUN_00450479();
  piStack_18 = (int *)0x60e59e;
  FUN_00450463();
  extraout_ECX[0x86] = extraout_ECX[0x88];
  piStack_18 = (int *)0x60e5b1;
  FUN_00450479();
  piStack_18 = (int *)0x60e5b8;
  FUN_00450463();
  extraout_ECX[0x84] = extraout_ECX[0x86];
  if (extraout_ECX[0x30] == 0) {
    piStack_18 = (int *)0x60e5d3;
    (**(code **)(*(int *)extraout_ECX[0x7a] + 0xc))();
    piStack_18 = (int *)0x60e5de;
    (**(code **)(*(int *)extraout_ECX[0x72] + 0xc))();
    piStack_18 = (int *)0x60e5e9;
    (**(code **)(*(int *)extraout_ECX[0x74] + 0xc))();
    piStack_18 = (int *)0x60e5f6;
    FUN_00450463();
    piStack_18 = (int *)0x60e603;
    FUN_00450479();
    piStack_18 = (int *)0x60e60a;
    FUN_00450463();
    extraout_ECX[0x72] = extraout_ECX[0x74];
    piStack_18 = (int *)0x60e61d;
    FUN_00450479();
    piStack_18 = (int *)0x60e624;
    FUN_00450463();
    extraout_ECX[0x7a] = extraout_ECX[0x72];
  }
  else {
    piStack_18 = (int *)0x60e63a;
    (**(code **)(*(int *)extraout_ECX[0x78] + 0xc))();
    piStack_18 = (int *)0x60e645;
    (**(code **)(*(int *)extraout_ECX[0x70] + 0xc))();
    piStack_18 = (int *)0x60e650;
    (**(code **)(*(int *)extraout_ECX[0x76] + 0xc))();
    piStack_18 = (int *)0x60e65d;
    FUN_00450463();
    piStack_18 = (int *)0x60e66a;
    FUN_00450479();
    piStack_18 = (int *)0x60e671;
    FUN_00450463();
    extraout_ECX[0x70] = extraout_ECX[0x76];
    piStack_18 = (int *)0x60e684;
    FUN_00450479();
    piStack_18 = (int *)0x60e68b;
    FUN_00450463();
    extraout_ECX[0x78] = extraout_ECX[0x70];
    piVar3 = extraout_ECX + 0x7d;
    iVar2 = 3;
    do {
      piStack_18 = (int *)0x60e6a2;
      (**(code **)(*(int *)piVar3[1] + 0xc))();
      piStack_18 = (int *)0x60e6a9;
      FUN_00450463();
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    extraout_ECX[0x61] = 1;
  }
  piStack_18 = (int *)(unaff_EBP + -0x10);
  uStack_1c = 0x60e6c5;
  piStack_18 = (int *)FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x60e6d7;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_18 = (int *)0x60e6e3;
  FUN_00414ebb();
  uStack_1c = 0x60e6ef;
  piStack_18 = extraout_ECX + 0x67;
  FUN_00414f8b();
  piStack_18 = (int *)0x1f0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_1c;
  FUN_007d4a9a(&uStack_1c,0x1f);
  FUN_007d3a22(extraout_ECX + 0x67);
  piStack_18 = (int *)0x60e715;
  uVar1 = FUN_0042452b();
  piStack_18 = *(int **)(unaff_EBP + 8);
  extraout_ECX[0x6b] = uVar1 & 0xff;
  uStack_1c = 0x60e728;
  (**(code **)(*extraout_ECX + 0x6c))();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



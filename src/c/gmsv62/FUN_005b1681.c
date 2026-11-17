/* FUN_005b1681 - 0x005b1681 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b1681(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc0) == 0) {
    uStack_28 = 0x5b16aa;
    (**(code **)(**(int **)(extraout_ECX + 0x19c) + 0xc))();
    uStack_28 = 0x5b16b5;
    FUN_00450463();
    uStack_28 = 0;
    iStack_2c = 0x5b16c4;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x194) + 4) + 0x1c))();
    iStack_2c = 0;
    iStack_30 = 0;
    FUN_0060142b(0x6f);
    iStack_2c = 0xb;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_30 = 0x5b16dd;
    FUN_00457cda();
    iStack_2c = 1;
    iStack_30 = 0x5b16e7;
    FUN_00457cda();
    iStack_2c = unaff_EBP + -0x24;
    iStack_30 = 0x5b16f6;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_2c = 0x5b1702;
    FUN_0045ebca();
  }
  else {
    uStack_28 = 0x5b170f;
    (**(code **)(**(int **)(extraout_ECX + 0x194) + 0xc))();
    uStack_28 = 0x5b171a;
    FUN_00450463();
    *(undefined4 *)(extraout_ECX + 0x710) = 0;
    uStack_28 = 0x5b172b;
    (**(code **)(**(int **)(extraout_ECX + 0x1ac) + 0xc))();
    *(undefined4 *)(extraout_ECX + 0x7e8) = 1;
    iStack_2c = 0x5b173a;
    iVar2 = FUN_007d1e08();
    *(int *)(extraout_ECX + 0x7ec) = iVar2 + 3000;
  }
  while( true ) {
    iStack_2c = 0x5b174d;
    cVar1 = FUN_0042452b();
    if (cVar1 < '\0') break;
    iStack_2c = 0x5b1760;
    FUN_004b8b70();
    iStack_2c = *(undefined4 *)(unaff_EBP + 8);
    iStack_30 = 0x5b1771;
    FUN_004b6451();
  }
  iStack_2c = unaff_EBP + 8;
  iStack_30 = 0x5b1781;
  iStack_2c = FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x718;
  iStack_30 = 0x5b1797;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_2c = 0x5b17a3;
  FUN_00414ebb();
  iStack_2c = 0x5b17aa;
  uVar3 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x730) = uVar3 & 0xff;
  iStack_2c = 0x5b17ba;
  uVar3 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xcc) = uVar3 & 0xff;
  if ((uVar3 & 0xff) != 0) {
    iStack_2c = 0x5b17ce;
    uVar3 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x7f0) = uVar3 & 0xff;
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      iVar2 = *(int *)(extraout_ECX + 0x194);
    }
    else {
      iVar2 = *(int *)(extraout_ECX + 0x19c);
    }
    iStack_2c = 0;
    iStack_30 = 0x5b17f6;
    (**(code **)(*(int *)(iVar2 + 4) + 0x24))();
    iStack_30 = 0;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1a4) + 4) + 0x24))();
  }
  iVar2 = *(int *)(extraout_ECX + 0x730);
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0x7dc) = 4;
    *(undefined4 *)(extraout_ECX + 0x744) = 0xc;
    *(undefined4 *)(extraout_ECX + 0x7e0) = 0x59;
    *(undefined4 *)(extraout_ECX + 0x7e4) = 0x6a;
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(extraout_ECX + 0x7dc) = 5;
    *(undefined4 *)(extraout_ECX + 0x744) = 0x14;
    *(undefined4 *)(extraout_ECX + 0x7e0) = 0x3d;
    *(undefined4 *)(extraout_ECX + 0x7e4) = 0x48;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(extraout_ECX + 0x7dc) = 6;
    *(undefined4 *)(extraout_ECX + 0x744) = 0x1e;
    *(undefined4 *)(extraout_ECX + 0x7e0) = 0x21;
    *(undefined4 *)(extraout_ECX + 0x7e4) = 0x27;
  }
  iStack_2c = 0x5ef;
  iStack_30 = unaff_EBP + -0x10;
  piVar4 = (int *)FUN_00679d22();
  iStack_2c = *(undefined4 *)(extraout_ECX + 0x730);
  iStack_30 = *piVar4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(extraout_ECX + 0x71c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_2c = 0x5b18cf;
  FUN_00414ebb();
  iStack_2c = 0;
  iStack_30 = 0x5b18d7;
  FUN_008161f1();
  iStack_2c = 0xd7;
  *(int **)(unaff_EBP + 8) = &iStack_30;
  FUN_0046fcc9(extraout_ECX + 0x208);
  FUN_007d3a22(*(undefined4 *)(unaff_EBP + -0x14));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



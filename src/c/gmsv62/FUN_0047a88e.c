/* FUN_0047a88e - 0x0047a88e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047a88e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x98) != 0) {
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x96c);
    uVar1 = *(undefined4 *)(extraout_ECX + 4);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0047c6e5(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 8);
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x96d);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0047c7cc(0,uVar1,*(undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0xc);
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x96e);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0047c7cc(0,uVar1,*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x970);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0047c6e5(0,uVar1,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x971);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x58);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x972);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x5c);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x973);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x60);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0047c6e5(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x974);
    uVar1 = *(undefined4 *)(extraout_ECX + 100);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x975);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x68);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_0047c6e5(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x976);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x6c);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x977);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x70);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xb1e);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x74);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xb1f);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x78);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xab1);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x7c);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    FUN_0047c6e5(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x978);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x80);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    FUN_0047c874(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x979);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x84);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    FUN_0047c6e5(0,uVar2,uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



/* FUN_0047a49e - 0x0047a49e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047a49e(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x98) != 0) {
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x96c);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar2 = FUN_0047c69a(0,uVar2,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 4) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x96d);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar2 = FUN_0047c713(unaff_EBP + -0x10,0,uVar2,&DAT_00978474);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x96e);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    uVar2 = FUN_0047c713(unaff_EBP + -0x14,0,uVar2,&DAT_00978474);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x96f);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    uVar2 = FUN_0047c824(0,uVar2,0,0x80000000,0x7fffffff);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x10) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x970);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    uVar2 = FUN_0047c69a(0,uVar2,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x14) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x971);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    uVar2 = FUN_0047c824(0,uVar2,3,0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x58) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x972);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    uVar2 = FUN_0047c824(0,uVar2,0xf,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x5c) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x973);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 9;
    uVar2 = FUN_0047c69a(0,uVar2,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x60) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x974);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    uVar2 = FUN_0047c824(0,uVar2,0xf,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 100) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x975);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    uVar2 = FUN_0047c69a(0,uVar2,0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x68) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x976);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    uVar2 = FUN_0047c824(0,uVar2,0,0,2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x6c) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x977);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    uVar2 = FUN_0047c824(0,uVar2,10,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x70) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xb1e);
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    uVar2 = FUN_0047c824(0,*puVar1,10,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x74) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xb1f);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    uVar2 = FUN_0047c824(0,uVar2,10,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xab1);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    uVar2 = FUN_0047c69a(0,uVar2,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x7c) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x978);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    uVar2 = FUN_0047c824(0,uVar2,3,0,3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x80) = uVar2;
    FUN_00414ebb();
    puVar1 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x979);
    uVar2 = *puVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    uVar2 = FUN_0047c69a(0,uVar2,1);
    *(undefined4 *)(extraout_ECX + 0x84) = uVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



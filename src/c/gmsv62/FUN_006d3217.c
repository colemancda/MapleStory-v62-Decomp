/* FUN_006d3217 - 0x006d3217 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d3217(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if ((-1 < *(int *)(unaff_EBP + 8)) && (*(int *)(unaff_EBP + 8) < 3)) {
    iVar1 = *(int *)(unaff_EBP + 8) * 0x20 + 0xb8 + extraout_ECX;
    iStack_18 = 0x6d3254;
    FUN_006d1da3();
    iStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = 1;
    iStack_1c = 0x6d3266;
    FUN_00432cfc();
    iStack_18 = unaff_EBP + -0x10;
    *(int *)(unaff_EBP + -0x14) = iVar1 + 0x1c;
    iStack_1c = 0x6d3275;
    FUN_00402f41();
    iStack_18 = 0x6d327d;
    FUN_00402fa6();
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(extraout_ECX + 100) == 2) {
      iStack_18 = 1;
      iStack_1c = 0x6d3295;
      FUN_006d2e81();
    }
    iStack_18 = 0;
    iStack_1c = *(int *)(unaff_EBP + 0xc);
    iStack_20 = *(undefined4 *)(unaff_EBP + 8);
    iStack_24 = 0x6d32a3;
    FUN_006d3586();
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      iStack_18 = *(undefined4 *)(iVar1 + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1c = 0x6d32ca;
      iStack_1c = FUN_004ec897();
      iStack_18 = 0xffffffff;
      iStack_20 = 0x6d32d5;
      FUN_00414edd();
      iStack_18 = 1;
      iStack_1c = unaff_EBP + 0x10;
      iStack_20 = unaff_EBP + 0x14;
      *(int **)(unaff_EBP + 0xc) = &iStack_24;
      FUN_00450368(unaff_EBP + 8);
      FUN_007d3411();
      if (**(int **)(unaff_EBP + -0x14) == 0) {
        iVar1 = 0;
      }
      else {
        iStack_18 = 0x6d3304;
        iVar1 = FUN_00409205();
      }
      iStack_18 = 0x310;
      iStack_1c = unaff_EBP + 0xc;
      iStack_20 = 0x6d331d;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
      iStack_20 = *puVar2;
      iStack_24 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_1c = iVar1;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_18 = 0x6d3340;
      FUN_00414ebb();
      iStack_18 = 0xffffffff;
      *(int **)(unaff_EBP + 0x18) = &iStack_1c;
      iStack_20 = 0xffffffff;
      iStack_24 = 0x6d3352;
      iStack_24 = FUN_00449713();
      FUN_004dbb20();
      iStack_20 = 0x6d3361;
      FUN_006d2ea2();
      iVar1 = *(int *)(extraout_ECX + 0x6c);
      *(undefined4 *)(extraout_ECX + 0x70) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(uint *)(extraout_ECX + 0x6c) = (uint)(iVar1 == 0);
      iStack_18 = 0x6d337b;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_18 = 0x6d3386;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_18 = 0x6d3392;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



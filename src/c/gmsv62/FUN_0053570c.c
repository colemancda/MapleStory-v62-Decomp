/* FUN_0053570c - 0x0053570c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0053570c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2b] = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008eb7b8;
  extraout_ECX[1] = &PTR_FUN_008eb76c;
  extraout_ECX[2] = &PTR_FUN_008eb768;
  extraout_ECX[0x2c] = uVar2;
  FUN_004bc5b8(0,0,1,0);
  iVar1 = FUN_00537942(extraout_ECX[0x2c]);
  if (iVar1 != 0) {
    FUN_0087a1b0();
    *(undefined4 *)(unaff_EBP + 0xc) = extraout_ECX[0x28];
    uVar2 = FUN_0087b818(1,&stack0xfffffff0,10);
    FUN_004a2fef(uVar2);
    (**(code **)(*(int *)(extraout_ECX[0x28] + 4) + 0x1c))(0);
  }
  iVar1 = extraout_ECX[0x2b];
  extraout_ECX[0x1d] = *(undefined4 *)(iVar1 + 0x1d4c);
  extraout_ECX[0x1f] = *(undefined4 *)(iVar1 + 0x1d50);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x20] = *(undefined4 *)(iVar1 + 0x1d54);
  extraout_ECX[0x1e] = 0;
  return extraout_ECX;
}



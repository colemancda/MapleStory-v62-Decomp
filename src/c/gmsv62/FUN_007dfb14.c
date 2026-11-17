/* FUN_007dfb14 - 0x007dfb14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007dfb14(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004bc4fa();
  _DAT_0097c1b0 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1e] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  extraout_ECX[0x1f] = 0xffffffff;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x29] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *extraout_ECX = &PTR_FUN_008f1d48;
  extraout_ECX[1] = &PTR_FUN_008f1cfc;
  extraout_ECX[2] = &PTR_FUN_008f1cf8;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xb81);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



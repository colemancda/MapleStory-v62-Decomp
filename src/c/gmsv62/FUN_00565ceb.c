/* FUN_00565ceb - 0x00565ceb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00565ceb(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_00979438 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  extraout_ECX[0x1e] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008ebcd0;
  extraout_ECX[1] = &PTR_LAB_008ebc84;
  extraout_ECX[2] = &PTR_FUN_008ebc80;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x558);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



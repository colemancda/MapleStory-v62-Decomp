/* FUN_006a7634 - 0x006a7634 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a7634(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &PTR_FUN_008ef5c4;
  extraout_ECX[1] = &PTR_LAB_008ef578;
  extraout_ECX[2] = &PTR_FUN_008ef574;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0xf3f);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



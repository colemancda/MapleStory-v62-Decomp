/* FUN_006a34d3 - 0x006a34d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a34d3(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc4fa();
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  extraout_ECX[0x25] = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x26] = 0;
  FUN_00414f8b(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *extraout_ECX = &PTR_FUN_008ef20c;
  extraout_ECX[1] = &PTR_FUN_008ef1c0;
  extraout_ECX[2] = &PTR_FUN_008ef1bc;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x1111);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



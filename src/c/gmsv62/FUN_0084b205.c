/* FUN_0084b205 - 0x0084b205 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0084b205(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  *(undefined4 **)(unaff_EBP + -0x14) = param_1;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *param_1 = &PTR_FUN_008f3578;
  param_1[1] = &PTR_FUN_008f352c;
  param_1[2] = &PTR_FUN_008f3528;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0xc08);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004bc5f0(uVar1,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return param_1;
}



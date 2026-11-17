/* FUN_004bc8b4 - 0x004bc8b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004bc8b4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar1;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_00979178 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea250;
  extraout_ECX[1] = &PTR_FUN_008ea204;
  extraout_ECX[2] = &PTR_FUN_008ea200;
  bVar1 = DAT_00979174 != 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar1) {
    FUN_00815de9();
    if (DAT_00979174 != 0) {
      (*(code *)**(undefined4 **)(DAT_00979174 + 8))(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



/* FUN_008669a6 - 0x008669a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008669a6(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00973abc = -(uint)(extraout_ECX != (undefined4 *)0xfffffffc) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_008671cb(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0086721a(0);
  extraout_ECX[7] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar1 = (*DAT_0097b704)();
  extraout_ECX[8] = uVar1;
  FUN_0086a780(s_IMapleStoryUS_0096cdb7 + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x10] = 0;
  *extraout_ECX = &PTR_FUN_008f36f0;
  return extraout_ECX;
}



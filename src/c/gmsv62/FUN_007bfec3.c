/* FUN_007bfec3 - 0x007bfec3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007bfec3(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00978140 = -(uint)(extraout_ECX != (undefined4 *)0xfffffffc) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0x1f;
  extraout_ECX[6] = 0;
  extraout_ECX[3] = &PTR_FUN_008f1a5c;
  extraout_ECX[7] = 100;
  extraout_ECX[8] = 0x18;
  extraout_ECX[0xb] = 0;
  extraout_ECX[0xc] = 0;
  extraout_ECX[0xd] = 0;
  extraout_ECX[9] = &PTR_FUN_008f1a58;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0xe] = &PTR_FUN_008f1a54;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0;
  extraout_ECX[0x19] = 0;
  extraout_ECX[0x15] = &PTR_FUN_008f1a50;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x1a] = &PTR_FUN_008f1a4c;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x1f] = &PTR_FUN_008f1a48;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008f1a40;
  extraout_ECX[0x14] = 0;
  iVar1 = (*DAT_0097b704)();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x13] = iVar1 + 20000;
  return extraout_ECX;
}



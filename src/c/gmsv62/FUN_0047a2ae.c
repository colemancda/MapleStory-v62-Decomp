/* FUN_0047a2ae - 0x0047a2ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0047a2ae(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  DAT_00978134 = -(uint)(extraout_ECX != (undefined4 *)0xfffffffc) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x6e] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *extraout_ECX = &PTR_FUN_008e9780;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x9c5);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  (*DAT_0097b6a8)(0x80000002,uVar1,0,0,0,0xf,0,extraout_ECX + 0x26,unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  _memset(extraout_ECX + 0x6f,0,0x1bd);
  FUN_0047a49e();
  FUN_0047cb0a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



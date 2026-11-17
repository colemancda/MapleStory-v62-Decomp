/* FUN_0065bb2f - 0x0065bb2f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065bb2f(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &LAB_008e9604;
  extraout_ECX[-2] = &PTR_LAB_008e95b8;
  extraout_ECX[-1] = &PTR_FUN_008e95b4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9610;
  iVar1 = DAT_00978364;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00818133(-(uint)(extraout_ECX != (undefined4 *)0xc) & (uint)(extraout_ECX + -2));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0xc) & (uint)extraout_ECX) =
       &PTR_LAB_008e84a0;
  return;
}



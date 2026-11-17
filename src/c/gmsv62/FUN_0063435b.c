/* FUN_0063435b - 0x0063435b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0063435b(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (*DAT_0097b704)();
  iVar1 = iVar1 * 0x45c82be5 + -0x2d09a4ab;
  FUN_0063439e(iVar1,iVar1,iVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



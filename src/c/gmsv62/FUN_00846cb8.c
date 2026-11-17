/* FUN_00846cb8 - 0x00846cb8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00846cb8(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = (*DAT_0097b704)();
  FUN_00669ff5(unaff_EBP + -0x2c,iVar2);
  cVar1 = FUN_006f5bb6();
  if ((cVar1 != '\0') && (200 < iVar2 - *(int *)(extraout_ECX + 0x3124))) {
    FUN_0060142b(0x5b,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



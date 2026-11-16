/* FUN_50407caa - 0x50407caa in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


bool FUN_50407caa(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar3;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar1 = *(char *)(extraout_ECX + 0x38);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if ((cVar1 == '\0') || (*(code **)(extraout_ECX + 8) == (code *)0x0)) {
    bVar3 = true;
  }
  else {
    iVar2 = (**(code **)(extraout_ECX + 8))(extraout_ECX + 0x38);
    bVar3 = iVar2 != 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar3;
}



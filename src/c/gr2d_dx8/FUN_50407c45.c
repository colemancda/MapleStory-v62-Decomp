/* FUN_50407c45 - 0x50407c45 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50407c45(void)

{
  char *_Dest;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  _Dest = (char *)(extraout_ECX + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  memset(_Dest,0,0x104);
  strcpy(_Dest,*(char **)(unaff_EBP + 8));
  if ((*_Dest != '\0') && (*(code **)(extraout_ECX + 8) != (code *)0x0)) {
    iVar1 = (**(code **)(extraout_ECX + 8))(_Dest);
    if (iVar1 != 1) {
      uVar2 = 0;
      goto LAB_50407c99;
    }
  }
  uVar2 = 1;
LAB_50407c99:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



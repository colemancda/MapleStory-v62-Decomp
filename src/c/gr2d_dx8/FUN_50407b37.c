/* FUN_50407b37 - 0x50407b37 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50407b37(void)

{
  HMODULE pHVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  extraout_ECX[6] = *(undefined4 *)(unaff_EBP + 8);
  pHVar1 = LoadLibraryA(s_WzFlashRenderer_dll_504354e8);
  *extraout_ECX = pHVar1;
  iVar2 = FUN_50407bd9(extraout_ECX);
  if (iVar2 == 0) {
    iVar2 = (*(code *)extraout_ECX[1])(unaff_EBP + 8);
    if (iVar2 == 0) {
      extraout_ECX[7] = *(undefined4 *)(unaff_EBP + 0xc);
      uVar3 = 0;
      goto LAB_50407b8b;
    }
  }
  uVar3 = 1;
LAB_50407b8b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



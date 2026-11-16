/* FUN_50c11141 - 0x50c11141 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c11141(void)

{
  wchar_t *pwVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_50c10270();
  pwVar1 = *(wchar_t **)(unaff_EBP + 0xc);
  if ((pwVar1 == (wchar_t *)0x0) || (*pwVar1 == L'\0')) {
    iVar4 = FUN_50c08269(*(short **)(unaff_EBP + 8));
    if (iVar4 < 0) {
      FUN_50c101c4(iVar4);
    }
  }
  else {
    *(undefined2 *)(unaff_EBP + -0x1c) = 8;
    piVar3 = FUN_50c05fda(pwVar1);
    *(int **)(unaff_EBP + -0x14) = piVar3;
    if (piVar3 == (int *)0x0) {
      FUN_50c101c4(0x8007000e);
    }
    puVar2 = *(ushort **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_50c09a25((short *)puVar2,(short *)(unaff_EBP + -0x1c));
    if (iVar4 < 0) {
      FUN_50c101c4(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_50c08269((short *)(unaff_EBP + -0x1c));
    if (iVar4 < 0) {
      FUN_50c101c4(iVar4);
    }
    iVar4 = FUN_50c08394(puVar2,puVar2,0,3);
    if (iVar4 < 0) {
      FUN_50c08394(puVar2,puVar2,0,5);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



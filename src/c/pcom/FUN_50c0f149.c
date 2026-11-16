/* FUN_50c0f149 - 0x50c0f149 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0f149(void)

{
  int *piVar1;
  void *this;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(short *)(unaff_EBP + 0x10) == 0) || (*(short *)(unaff_EBP + 0x10) == 10)) {
    FUN_50c04bec(&DAT_50c21434);
    FUN_50c02a72((undefined4 *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -0x14) = DAT_50c21434;
  }
  else {
    Ordinal_8(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_50c08363((void *)(unaff_EBP + -0x2c),8,(ushort *)(unaff_EBP + 0x10));
    if ((*(int *)(unaff_EBP + -0x24) == 0) ||
       (uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x24) + -4) >> 1,
       *(uint *)(unaff_EBP + -0x18) = uVar2, uVar2 == 0)) {
      FUN_50c04bec(&DAT_50c21434);
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x14));
      *(undefined4 *)(unaff_EBP + -0x14) = DAT_50c21434;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined2 *)(unaff_EBP + -0x2c) = 0;
      FUN_50c05e8d();
      FUN_50c04bec((int *)(unaff_EBP + -0x18));
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x14));
      piVar1 = *(int **)(unaff_EBP + -0x18);
      *(int **)(unaff_EBP + -0x14) = piVar1;
      if (piVar1 != (int *)0x0) {
        FUN_50c02a85(piVar1);
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar3 = FUN_50c08269((short *)(unaff_EBP + -0x2c));
    if (iVar3 < 0) {
      FUN_50c101c4(iVar3);
    }
  }
  this = *(void **)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)((int)this + 0x18);
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_50c0f7f7(this,*(wchar_t **)(unaff_EBP + 0xc),(int *)(unaff_EBP + -0x14));
  piVar1 = (int *)((int)this + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    FUN_50c02a85(*(int **)(unaff_EBP + -0x14));
  }
  FUN_50c0f281();
  return;
}



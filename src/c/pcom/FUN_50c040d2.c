/* FUN_50c040d2 - 0x50c040d2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c040d2(int *param_1)

{
  void *pvVar1;
  void *this;
  
  this = (void *)*param_1;
  if (this != (void *)0x0) {
    pvVar1 = (void *)((int)this + *(int *)((int)this + -4) * 8);
    for (; this < pvVar1; this = (void *)((int)this + 8)) {
      FUN_50c045c7(this,0);
    }
    FUN_50c02783(&DAT_50c21310,(undefined4 *)(*param_1 + -4));
    *param_1 = 0;
  }
  return;
}



/* FUN_50c0bb01 - 0x50c0bb01 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0bb01(void *this,void *param_1)

{
  void *this_00;
  
  for (this_00 = param_1; this_00 < (void *)((int)param_1 + 8); this_00 = (void *)((int)this_00 + 8)
      ) {
    FUN_50c045c7(this_00,0);
  }
  memmove(param_1,(void *)((int)param_1 + 8),
          ((*(int *)(*(int *)this + -4) * 8 - (int)param_1) + -8 + *(int *)this >> 3) << 3);
  *(int *)(*(int *)this + -4) = *(int *)(*(int *)this + -4) + -1;
  return;
}



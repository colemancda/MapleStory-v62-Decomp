/* FUN_508098a4 - 0x508098a4 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_508098a4(void *this,char param_1)

{
  undefined1 local_14 [16];
  
  if (this != (void *)0x0) {
    do {
      if (*(short *)this != 0x400c) break;
      this = *(void **)((int)this + 8);
    } while (this != (short *)0x0);
    if (this != (short *)0x0) {
      return;
    }
  }
  if (param_1 == '\0') {
    return;
  }
  FUN_5080450d(local_14,0x80004003,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_14,(ThrowInfo *)&DAT_50819008);
}



/* FUN_1000b250 - 0x1000b250 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_1000b250(void *this,int param_1)

{
  uint uVar1;
  
  if ((*(byte *)((int)this + 8) & 1) != 0) {
    do {
      while( true ) {
        FUN_1000afd0((int)this);
        *(int *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        uVar1 = FUN_100047c0((int *)((int)this + 0x10),2);
        if (uVar1 == 0) break;
        if ((int)uVar1 < 0) {
          *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 4;
          FUN_1000abe0(uVar1);
        }
      }
    } while (*(int *)((int)this + 0x20) == 0);
    FUN_1000afd0((int)this);
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xfffffffe;
  }
  if (param_1 != 0) {
    FUN_1000c040(this,param_1);
  }
  return;
}



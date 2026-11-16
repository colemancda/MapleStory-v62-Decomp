/* FUN_5180602f - 0x5180602f in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_5180602f(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = 1;
  if (*(int *)((int)this + 0x18) == 0) goto LAB_51806091;
  iVar1 = (*DAT_5181fa6c)(*(int *)((int)this + 0x18));
  if (iVar1 != 0) {
    local_c = *(undefined4 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x18) = 0;
    iVar2 = (*DAT_5181fa98)(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 8),
                            &local_c,0);
    if (iVar2 != -1) goto LAB_51806091;
    iVar2 = (*DAT_5181fad4)();
    if (iVar2 == 0) goto LAB_51806091;
    iVar1 = 0;
  }
  local_8 = (*DAT_5181fad4)();
LAB_51806091:
  if ((param_1 != 0) && (*(int *)((int)this + 0x14) != 0)) {
    iVar2 = (*DAT_5181f9c0)(*(int *)((int)this + 0x14));
    if ((iVar2 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (local_8 == 0) {
        local_8 = (*DAT_5181fad4)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  (*DAT_5181fad8)(local_8);
  return iVar1;
}



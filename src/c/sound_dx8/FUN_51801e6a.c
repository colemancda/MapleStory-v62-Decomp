/* FUN_51801e6a - 0x51801e6a in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __thiscall
FUN_51801e6a(void *this,undefined4 param_1,int param_2,int param_3,uint param_4,void *param_5)

{
  uintptr_t uVar1;
  int iVar2;
  void *local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  memset(&local_20,0,0x18);
  local_1c = param_1;
  local_18 = -(uint)(param_3 != 0) & 4;
  local_20 = this;
  local_14 = (*DAT_5181fa0c)(0,1,0,0);
  local_10 = (*DAT_5181fa0c)(0,1,0,0);
  local_c = 0;
  if ((local_14 == 0) || (local_10 == 0)) {
    iVar2 = (*DAT_5181fad4)();
    if (local_14 != 0) {
      (*DAT_5181f9c0)(local_14);
    }
    if (local_10 == 0) goto LAB_51801f9b;
  }
  else {
    local_8 = 0;
    uVar1 = _beginthreadex(param_5,param_4,(_StartAddress *)&LAB_51801fa9,&local_20,local_18 | 4,
                           &local_8);
    *(uintptr_t *)((int)this + 8) = uVar1;
    if (uVar1 != 0) {
      *(uint *)((int)this + 4) = local_8;
      if (param_2 != 0) {
        (*DAT_5181f9e8)(uVar1,param_2);
      }
      (*DAT_5181f9ec)(*(undefined4 *)((int)this + 8));
      (*DAT_5181fa1c)(local_14,0xffffffff);
      (*DAT_5181f9c0)(local_14);
      if (local_c == 0) {
        if ((local_18 & 4) != 0) {
          (*DAT_5181f9f0)(*(undefined4 *)((int)this + 8));
        }
        (*DAT_5181fa10)(local_10);
        return 1;
      }
      (*DAT_5181f9c0)(*(undefined4 *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 4) = 0;
      iVar2 = local_c;
      goto LAB_51801f9b;
    }
    iVar2 = (*DAT_5181fad4)();
    (*DAT_5181f9c0)(local_14);
  }
  (*DAT_5181f9c0)(local_10);
LAB_51801f9b:
  (*DAT_5181fad8)(iVar2);
  return 0;
}



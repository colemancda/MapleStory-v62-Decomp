/* FUN_5080d193 - 0x5080d193 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __thiscall FUN_5080d193(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = 1;
  if (*(int *)((int)this + 0x18) == 0) goto LAB_5080d1f5;
  iVar1 = (*DAT_5081e69c)(*(int *)((int)this + 0x18));
  if (iVar1 != 0) {
    local_c = *(undefined4 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x18) = 0;
    iVar2 = (*DAT_5081e6c8)(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 8),
                            &local_c,0);
    if (iVar2 != -1) goto LAB_5080d1f5;
    iVar2 = (*DAT_5081e704)();
    if (iVar2 == 0) goto LAB_5080d1f5;
    iVar1 = 0;
  }
  local_8 = (*DAT_5081e704)();
LAB_5080d1f5:
  if ((param_1 != 0) && (*(int *)((int)this + 0x14) != 0)) {
    iVar2 = (*DAT_5081e5f0)(*(int *)((int)this + 0x14));
    if ((iVar2 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (local_8 == 0) {
        local_8 = (*DAT_5081e704)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  (*DAT_5081e708)(local_8);
  return iVar1;
}



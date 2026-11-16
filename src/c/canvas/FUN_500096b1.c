/* FUN_500096b1 - 0x500096b1 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __cdecl FUN_500096b1(uint param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if (param_2 == 1) {
    local_8 = ((param_1 & 0xfffff000) << 4 | param_1 & 0xf000) << 0xc;
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 0x201) {
        return 0;
      }
      local_8 = 0;
      goto LAB_500096d1;
    }
    local_8 = param_1 & 0xff000000;
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_500096d1:
  bVar2 = true;
  if (param_2 != 2) {
    if ((*(int *)param_3 == 0) || ((*param_3 & 0x800) != 0)) {
      if (param_2 == 1) {
        param_1 = FUN_500073e6(param_1);
      }
      else {
        param_1 = FUN_5000741d(param_1);
      }
    }
    else {
      if (param_2 == 1) {
        FUN_500099d5(&local_14,param_1);
      }
      else {
        FUN_50009a05(&local_14,param_1);
      }
      bVar2 = false;
    }
  }
  iVar6 = *(int *)param_3;
  do {
    if (iVar6 == 0) {
      if (!bVar2) {
        param_1 = FUN_50009a30((int *)&local_14);
      }
      return local_8 | param_1;
    }
    uVar1 = *param_3;
    iVar6 = (int)(short)param_3[1];
    if ((uVar1 & 0x800) == 0) {
      if (bVar2) {
        FUN_50007457(&local_14,param_1);
        bVar2 = false;
      }
      if (uVar1 == 1) {
        local_14 = local_14 + iVar6 & 0xff;
      }
      else if (uVar1 == 2) {
        if (iVar6 < 1) {
          local_10 = (iVar6 + 0x80) * local_10 >> 7;
        }
        else {
          local_10 = 0xff - ((0xff - local_10) * (0x7f - iVar6) >> 7);
        }
      }
      else if (uVar1 == 3) {
        if (0x80 < iVar6) {
          iVar3 = -iVar6 + 0xff;
          if (iVar3 < 1) {
            local_10 = (-iVar6 + 0x17f) * local_10 >> 7;
          }
          else {
            local_10 = 0xff - ((0x7f - iVar3) * (0xff - local_10) >> 7);
          }
        }
        if (iVar6 < 1) {
          local_c = (iVar6 + 0x80) * local_c >> 7;
        }
        else {
          local_c = 0xff - ((0xff - local_c) * (0x7f - iVar6) >> 7);
        }
      }
    }
    else {
      if (!bVar2) {
        param_1 = FUN_50009a30((int *)&local_14);
        bVar2 = true;
      }
      if (uVar1 == 0x801) {
        if (iVar6 < 1) {
          iVar6 = (int)((iVar6 + 0x80) * (uint)param_1._2_1_) >> 7;
        }
        else {
          iVar6 = 0xff - ((int)((0xff - (uint)param_1._2_1_) * (0x7f - iVar6)) >> 7);
        }
        uVar5 = param_1 & 0xff00ffff;
        uVar4 = iVar6 << 0x10;
      }
      else {
        if (uVar1 != 0x802) {
          if (uVar1 == 0x803) {
            if (iVar6 < 1) {
              uVar4 = (int)((iVar6 + 0x80) * (param_1 & 0xff)) >> 7;
            }
            else {
              uVar4 = 0xff - ((int)((0xff - (param_1 & 0xff)) * (0x7f - iVar6)) >> 7);
            }
            param_1 = param_1 & 0xffffff00 | uVar4;
          }
          else if (uVar1 == 0x804) {
            iVar3 = (uint)param_1._2_1_ + iVar6;
            if (iVar3 < 0x100) {
              if (iVar3 < 0) {
                iVar3 = 0;
              }
            }
            else {
              iVar3 = 0xff;
            }
            uVar4 = (uint)param_1._1_1_ + iVar6;
            if ((int)uVar4 < 0x100) {
              if ((int)uVar4 < 0) {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = 0xff;
            }
            uVar5 = (param_1 & 0xff) + iVar6;
            if ((int)uVar5 < 0x100) {
              if ((int)uVar5 < 0) {
                uVar5 = 0;
              }
            }
            else {
              uVar5 = 0xff;
            }
            param_1 = (iVar3 << 8 | uVar4) << 8 | uVar5;
          }
          else if (uVar1 == 0x805) {
            iVar3 = FUN_50009b31((uint)param_1._2_1_,iVar6);
            uVar4 = FUN_50009b31((uint)param_1._1_1_,iVar6);
            uVar5 = FUN_50009b31(param_1 & 0xff,iVar6);
            param_1 = (iVar3 << 8 | uVar4) << 8 | uVar5;
          }
          goto LAB_500099a7;
        }
        if (iVar6 < 1) {
          iVar6 = (int)((iVar6 + 0x80) * (uint)param_1._1_1_) >> 7;
        }
        else {
          iVar6 = 0xff - ((int)((0xff - (uint)param_1._1_1_) * (0x7f - iVar6)) >> 7);
        }
        uVar5 = param_1 & 0xffff00ff;
        uVar4 = iVar6 << 8;
      }
      param_1 = uVar5 | uVar4;
    }
LAB_500099a7:
    param_3 = param_3 + 2;
    iVar6 = *(int *)param_3;
  } while( true );
}



/* FUN_00736eaa - 0x00736eaa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00736eaa(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_00455c59(local_c);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
  if (300 < sVar1) {
    if (0x1a6 < sVar1) {
      if (sVar1 == 500) {
        uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
        iVar2 = (uVar3 & 0xff) * 0x12 + -0x37;
      }
      else {
        if (sVar1 < 0x1fe) {
          return 0;
        }
        if (0x200 < sVar1) {
          if (sVar1 < 0x208) {
            return 0;
          }
          if (0x20a < sVar1) {
            return 0;
          }
        }
        uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
        iVar2 = (uVar3 & 0xff) * 0x12 + 0x5f;
      }
      goto LAB_007370c3;
    }
    if (sVar1 < 0x1a4) {
      if (sVar1 < 0x136) {
        return 0;
      }
      if (0x138 < sVar1) {
        if (sVar1 < 0x140) {
          return 0;
        }
        if (0x142 < sVar1) {
          if (sVar1 == 400) goto LAB_00737048;
          if (sVar1 < 0x19a) {
            return 0;
          }
          if (0x19c < sVar1) {
            return 0;
          }
        }
      }
    }
    uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
    iVar2 = (uVar3 & 0xff) * 0xe + 0x87;
    goto LAB_007370c3;
  }
  if (sVar1 == 300) {
LAB_00737048:
    uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
    iVar2 = (uVar3 & 0xff) * 0xe + -0xf;
    goto LAB_007370c3;
  }
  if (0x84 < sVar1) {
    if (sVar1 == 200) {
      uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
      iVar2 = (uVar3 & 0xff) * 0x16 + -1;
    }
    else {
      if (sVar1 < 0xd2) {
        return 0;
      }
      if (0xd4 < sVar1) {
        if (sVar1 < 0xdc) {
          return 0;
        }
        if (0xde < sVar1) {
          if (sVar1 < 0xe6) {
            return 0;
          }
          if (0xe8 < sVar1) {
            return 0;
          }
        }
      }
      uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
      iVar2 = (uVar3 & 0xff) * 0x16 + 0x1c1;
    }
    goto LAB_007370c3;
  }
  if (sVar1 < 0x82) {
    if (sVar1 == 0) {
      uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
      iVar2 = (uVar3 & 0xff) * 10 + -5;
      goto LAB_007370c3;
    }
    if (sVar1 != 100) {
      if (sVar1 < 0x6e) {
        return 0;
      }
      if (0x70 < sVar1) {
        if (sVar1 < 0x78) {
          return 0;
        }
        if (0x7a < sVar1) {
          return 0;
        }
        goto LAB_00736f6a;
      }
    }
    uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
    iVar2 = (uVar3 & 0xff) * 4 + 0x37;
  }
  else {
LAB_00736f6a:
    uVar3 = FUN_0045f03e(iVar2 + 0x33,*(undefined4 *)(iVar2 + 0x35));
    iVar2 = (uVar3 & 0xff) * 4 + 0x9b;
  }
LAB_007370c3:
  if (iVar2 <= param_1) {
    return 0;
  }
  return 1;
}



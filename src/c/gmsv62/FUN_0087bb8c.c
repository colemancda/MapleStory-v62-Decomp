/* FUN_0087bb8c - 0x0087bb8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0087bb8c(ushort *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  uint local_8;
  
  local_8 = 0;
  uVar6 = *param_1;
  puVar1 = param_1;
  while( true ) {
    puVar7 = puVar1 + 1;
    iVar2 = FUN_00883a76(uVar6,8);
    if (iVar2 == 0) break;
    uVar6 = *puVar7;
    puVar1 = puVar7;
  }
  if (uVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_0087bbc7:
    uVar6 = *puVar7;
    puVar7 = puVar1 + 2;
  }
  else if (uVar6 == 0x2b) goto LAB_0087bbc7;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (uVar6 != 0x30) {
      param_3 = 10;
      goto LAB_0087bc2f;
    }
    if ((*puVar7 != 0x78) && (*puVar7 != 0x58)) {
      param_3 = 8;
      goto LAB_0087bc2f;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (uVar6 == 0x30)) && ((*puVar7 == 0x78 || (*puVar7 == 0x58)))) {
    uVar6 = puVar7[1];
    puVar7 = puVar7 + 2;
  }
LAB_0087bc2f:
  uVar3 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    iVar2 = FUN_00883a76(uVar6,4);
    if (iVar2 == 0) {
      iVar2 = FUN_00883a76(uVar6,0x103);
      if (iVar2 == 0) {
LAB_0087bc9f:
        puVar7 = puVar7 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            puVar7 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          puVar4 = (undefined4 *)FUN_0087fc84();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = puVar7;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      uVar5 = FUN_0088398b(uVar6);
      uVar5 = (uVar5 & 0xffff) - 0x37;
    }
    else {
      uVar5 = uVar6 - 0x30;
    }
    if (param_3 <= uVar5) goto LAB_0087bc9f;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar5 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar5;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    uVar6 = *puVar7;
    puVar7 = puVar7 + 1;
  } while( true );
}



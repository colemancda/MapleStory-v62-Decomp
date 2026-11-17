/* FUN_008709f0 - 0x008709f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_008709f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 local_310;
  char local_30c;
  undefined4 local_30b;
  char cStack_209;
  undefined1 local_208 [3];
  undefined1 auStack_205 [257];
  char local_104;
  undefined4 local_103;
  
  if (((DAT_0097fb4c == 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    local_30c = '\0';
    puVar8 = &local_30b;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_208[0] = '\0';
    puVar8 = (undefined4 *)((int)local_208 + 1);
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_104 = '\0';
    puVar8 = &local_103;
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    uVar6 = 0xffffffff;
    pcVar4 = param_1;
    do {
      pcVar2 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar2 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar2;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar2 + -uVar6;
    pcVar2 = &local_30c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar4 = param_1;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar4 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar4;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar4 + -uVar6;
    pcVar2 = local_208;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar4 = &local_30c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)((int)&local_310 + ~uVar6 + 3);
    pcVar2 = (char *)FUN_00875080(&DAT_0096ee38);
    uVar7 = 0xffffffff;
    do {
      pcVar3 = pcVar2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar3 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar3;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar2 = &cStack_209 + ~uVar6;
    pcVar3 = pcVar3 + -uVar7;
    pcVar10 = pcVar4;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096ee28);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = FUN_0087cfc3(&local_30c,0);
    if (iVar5 == 0) {
      CopyFileA(&local_30c,local_208,0);
    }
    else {
      DeleteFileA(local_208);
    }
    local_310 = 1;
    do {
      pcVar3 = (char *)FUN_00875080(&DAT_0096ee1c);
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar3 = (char *)FUN_00875080(&DAT_0096ee10);
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar2;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_0087b818(local_310,&local_104,10);
      uVar6 = 0xffffffff;
      pcVar3 = &local_104;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar3 = &local_30c;
      do {
        pcVar9 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar3 = &local_104;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar3 = local_208;
      do {
        pcVar9 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar3 = (char *)FUN_00875080(&DAT_0096ee08);
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar3 = &local_30c;
      do {
        pcVar9 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcVar3 = (char *)FUN_00875080(&DAT_0096ee08);
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar10;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar3 = local_208;
      do {
        pcVar9 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      pcVar3 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar5 = FUN_0087cfc3(&local_30c,0);
      if (iVar5 == 0) {
        CopyFileA(&local_30c,local_208,0);
      }
      else {
        DeleteFileA(local_208);
      }
      local_310 = local_310 + 1;
    } while (local_310 < 10);
    pcVar3 = (char *)FUN_00875080(&DAT_0096edf8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096ede8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = FUN_0087cfc3(&local_30c,0);
    if (iVar5 == 0) {
      CopyFileA(&local_30c,local_208,0);
    }
    else {
      DeleteFileA(local_208);
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096edd8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096edc8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = FUN_0087cfc3(&local_30c,0);
    if (iVar5 == 0) {
      CopyFileA(&local_30c,local_208,0);
    }
    else {
      DeleteFileA(local_208);
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096edb8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096eda8);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    pcVar10 = pcVar2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = FUN_0087cfc3(&local_30c,0);
    if (iVar5 == 0) {
      CopyFileA(&local_30c,local_208,0);
    }
    else {
      DeleteFileA(local_208);
    }
    pcVar3 = (char *)FUN_00875080(&DAT_0096ed98);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar3 = pcVar10 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    pcVar4 = (char *)FUN_00875080(&DAT_0096ed88);
    uVar6 = 0xffffffff;
    do {
      pcVar3 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar3 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar2 = pcVar2 + 1;
    }
    iVar5 = FUN_0087cfc3(&local_30c,0);
    if (iVar5 == 0) {
      CopyFileA(&local_30c,local_208,0);
      return;
    }
    DeleteFileA(local_208);
  }
  return;
}



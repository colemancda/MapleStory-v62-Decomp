/* FUN_0086ac80 - 0x0086ac80 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0086b6d4) */
/* WARNING: Removing unreachable block (ram,0x0086b72b) */
/* WARNING: Removing unreachable block (ram,0x0086b75e) */
/* WARNING: Removing unreachable block (ram,0x0086b16d) */
/* WARNING: Removing unreachable block (ram,0x0086b1c4) */
/* WARNING: Removing unreachable block (ram,0x0086b1f7) */

char * FUN_0086ac80(char *param_1)

{
  ushort uVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  LPCSTR pCVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *hTemplateFile;
  HCRYPTPROV HVar9;
  undefined4 uVar10;
  char *extraout_ECX;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  CHAR *pCVar17;
  undefined4 *puVar18;
  char *pcVar19;
  _STARTUPINFOA *p_Var20;
  char *pcVar21;
  bool bVar22;
  undefined4 local_114c [512];
  CHAR local_94c [1024];
  CHAR local_54c [256];
  char local_44c [260];
  int local_348;
  undefined4 local_344;
  undefined4 local_340;
  char local_33c [252];
  char local_240 [260];
  _STARTUPINFOA local_13c;
  byte local_c8 [16];
  byte local_b8 [16];
  _SECURITY_ATTRIBUTES local_a8;
  byte local_9c [8];
  HANDLE local_94;
  HANDLE local_90;
  int local_8c [2];
  _PROCESS_INFORMATION local_84;
  DWORD local_74;
  BYTE local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  byte local_5d [25];
  undefined4 local_44;
  DWORD DVar23;
  LPSECURITY_ATTRIBUTES p_Var24;
  DWORD DVar25;
  LPDWORD lpNumberOfBytesWritten;
  HANDLE pvVar26;
  HCRYPTKEY *phKey;
  HCRYPTKEY HVar27;
  
  FUN_0087a1b0();
  if (*extraout_ECX != '\0') {
    return (char *)0x755;
  }
  cVar2 = FUN_0086d220();
  extraout_ECX[0x2b79] = cVar2;
  DVar3 = GetCurrentProcessId();
  *(DWORD *)(extraout_ECX + 0x2b0c) = DVar3;
  DAT_0097fb2c = GetCurrentThreadId();
  FUN_0087b372();
  extraout_ECX[0x2b2f] = '\0';
  FUN_0086d2f0();
  iVar4 = FUN_0087cfc3();
  if ((iVar4 == -1) &&
     (BVar5 = CreateDirectoryA(&DAT_0097f804,(LPSECURITY_ATTRIBUTES)0x0), BVar5 == 0)) {
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x6f;
  }
  lstrcatA(&DAT_0097f804,&DAT_009640e8);
  FUN_008709f0();
  pCVar6 = (LPCSTR)FUN_00875080();
  lstrcatA(&DAT_0097f804,pCVar6);
  piVar15 = (int *)(extraout_ECX + 0x24);
  local_70 = '\x06';
  local_6f = 2;
  local_6e = 0;
  local_6d = 0;
  local_6c = 0;
  local_6b = 0xa4;
  local_6a = 0;
  local_69 = 0;
  local_68 = 0x52;
  local_67 = 0x53;
  local_66 = 0x41;
  local_65 = 0x31;
  local_64 = 0;
  local_63 = 2;
  local_62 = 0;
  local_61 = 0;
  local_60 = 1;
  local_5f = 0;
  local_5e = 1;
  local_5d[0] = 0;
  local_5d[1] = 0x69;
  local_5d[2] = 0xb3;
  local_5d[3] = 0xdd;
  local_5d[4] = 0xe8;
  local_5d[5] = 0x3d;
  local_5d[6] = 0x70;
  local_5d[7] = 0xa5;
  local_5d[8] = 0xfb;
  local_5d[9] = 0xd7;
  local_5d[10] = 0xb8;
  local_5d[0xb] = 0xfb;
  local_5d[0xc] = 0x60;
  local_5d[0xd] = 0x68;
  local_5d[0xe] = 0xf;
  local_5d[0xf] = 0x99;
  local_5d[0x10] = 0xc2;
  local_5d[0x11] = 0xb9;
  local_5d[0x12] = 0xe4;
  local_5d[0x13] = 0x20;
  local_5d[0x14] = 0x83;
  local_5d[0x15] = 0xb5;
  local_5d[0x16] = 0xe6;
  local_5d[0x17] = 0x5d;
  local_5d[0x18] = 0xbf;
  local_44 = 0x29236269;
  if (*piVar15 == -1) {
    uVar11 = 0xffffffff;
    extraout_ECX[0x145c] = '\0';
    extraout_ECX[0x145d] = '\0';
    extraout_ECX[0x145e] = '\0';
    extraout_ECX[0x145f] = '\0';
    extraout_ECX[0x1460] = -0x18;
    extraout_ECX[0x1461] = '\x03';
    extraout_ECX[0x1462] = '\0';
    extraout_ECX[0x1463] = '\0';
    pcVar13 = &DAT_0097f804;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    if ((~uVar11 - 1 < 4) || (DAT_0097f805 == ':')) {
LAB_0086af37:
      piVar14 = &local_348;
    }
    else {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_348,0x104);
      iVar4 = FUN_0087cf51();
      piVar14 = (int *)(iVar4 + 1);
      if (iVar4 == 0) goto LAB_0086af37;
    }
    uVar11 = 0xffffffff;
    pvVar26 = (HANDLE)0x0;
    pcVar13 = &DAT_0097f804;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    DVar25 = 0x80000080;
    DVar3 = 2;
    piVar16 = (int *)(pcVar21 + -uVar11);
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *piVar14 = *piVar16;
      piVar16 = piVar16 + 1;
      piVar14 = piVar14 + 1;
    }
    p_Var24 = (LPSECURITY_ATTRIBUTES)0x0;
    DVar23 = 1;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(char *)piVar14 = (char)*piVar16;
      piVar16 = (int *)((int)piVar16 + 1);
      piVar14 = (int *)((int)piVar14 + 1);
    }
    pvVar26 = CreateFileA((LPCSTR)&local_348,0xc0000000,DVar23,p_Var24,DVar3,DVar25,pvVar26);
    *piVar15 = (int)pvVar26;
    if (pvVar26 == (HANDLE)0xffffffff) goto LAB_0086b29f;
    GetLocalTime((LPSYSTEMTIME)(extraout_ECX + 0x1040));
    FUN_00875010();
    FUN_00879f55();
    uVar11 = 0xffffffff;
    pcVar13 = extraout_ECX + 0x40;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    pcVar13 = (char *)(~uVar11 - 1);
    if (*(int *)(extraout_ECX + 0x1460) == 999) {
      pcVar13 = (char *)0x0;
    }
    if (*(int *)(extraout_ECX + 0x145c) == 0) {
      uVar1 = *(ushort *)(extraout_ECX + 0x104e);
      DVar3 = GetTickCount();
      uVar11 = ((uint)*(ushort *)(extraout_ECX + 0x104a) +
               DVar3 + uVar1 + (uint)*(ushort *)(extraout_ECX + 0x104c)) *
               ((uint)*(ushort *)(extraout_ECX + 0x1046) * (uint)*(ushort *)(extraout_ECX + 0x1042)
                * (uint)((LPSYSTEMTIME)(extraout_ECX + 0x1040))->wYear * (uint)uVar1 + 1) & 0xffff |
               0xec000000;
      *(uint *)(extraout_ECX + 0x1050) = (uVar11 % 10 ^ 0x55) << 0x10 | uVar11;
      GetTickCount();
      FUN_0087ad78();
      iVar4 = 0;
      do {
        iVar8 = _rand();
        local_9c[iVar4] = (byte)iVar8;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
      FUN_008748d0();
      BVar5 = CryptAcquireContextA
                        ((HCRYPTPROV *)&stack0xfffffff0,(LPCSTR)0x0,
                         s_Microsoft_Base_Cryptographic_Pro_0096de70,1,0);
      if (BVar5 != 0) {
        phKey = (HCRYPTKEY *)&stack0xffffffec;
        BVar5 = CryptImportKey(0,&local_70,0x54,0,0,phKey);
        if (BVar5 != 0) {
          CryptEncrypt((HCRYPTKEY)phKey,0,1,0,(BYTE *)0x0,(DWORD *)&stack0xfffffff8,0);
          local_8c[0] = 0xcced00;
          WriteFile((HANDLE)*piVar15,local_8c,4,(LPDWORD)&stack0xfffffff8,(LPOVERLAPPED)0x0);
          iVar4 = 0;
          do {
            local_b8[iVar4] = local_9c[iVar4] ^ local_5d[iVar4];
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x10);
          HVar27 = 0;
          WriteFile((HANDLE)*piVar15,local_b8,0x10,(LPDWORD)&stack0xfffffff8,(LPOVERLAPPED)0x0);
          CryptDestroyKey(HVar27);
        }
        CryptReleaseContext(0,0);
      }
      pcVar13 = extraout_ECX + 0x40;
      FUN_008749c0();
    }
    else if (0 < (int)pcVar13) {
      pbVar7 = (byte *)(extraout_ECX + 0x40);
      do {
        iVar4 = *(int *)(extraout_ECX + 0x145c);
        *(int *)(extraout_ECX + 0x145c) = iVar4 + 2;
        *pbVar7 = *pbVar7 ^ (char)(iVar4 + 2) + 0x43U;
        pbVar7 = pbVar7 + 1;
      } while ((int)(pbVar7 + (-0x1c - (int)piVar15)) < (int)pcVar13);
    }
    WriteFile((HANDLE)*piVar15,extraout_ECX + 0x40,(DWORD)pcVar13,&local_74,(LPOVERLAPPED)0x0);
  }
  else {
LAB_0086b29f:
    local_8c[0] = FUN_0087cf51();
    if (local_8c[0] != 0) {
      hTemplateFile = (undefined1 *)0x1;
      do {
        FUN_00875080();
        FUN_00879f55();
        local_70 = '\x06';
        local_6f = 2;
        local_6e = 0;
        local_6d = 0;
        local_6c = 0;
        local_6b = 0xa4;
        local_6a = 0;
        local_69 = 0;
        local_68 = 0x52;
        local_67 = 0x53;
        local_66 = 0x41;
        local_65 = 0x31;
        local_64 = 0;
        local_63 = 2;
        local_62 = 0;
        local_61 = 0;
        local_60 = 1;
        local_5f = 0;
        local_5e = 1;
        local_5d[0] = 0;
        local_5d[1] = 0x69;
        local_5d[2] = 0xb3;
        local_5d[3] = 0xdd;
        local_5d[4] = 0xe8;
        local_5d[5] = 0x3d;
        local_5d[6] = 0x70;
        local_5d[7] = 0xa5;
        local_5d[8] = 0xfb;
        local_5d[9] = 0xd7;
        local_5d[10] = 0xb8;
        local_5d[0xb] = 0xfb;
        local_5d[0xc] = 0x60;
        local_5d[0xd] = 0x68;
        local_5d[0xe] = 0xf;
        local_5d[0xf] = 0x99;
        local_5d[0x10] = 0xc2;
        local_5d[0x11] = 0xb9;
        local_5d[0x12] = 0xe4;
        local_5d[0x13] = 0x20;
        local_5d[0x14] = 0x83;
        local_5d[0x15] = 0xb5;
        local_5d[0x16] = 0xe6;
        local_5d[0x17] = 0x5d;
        local_5d[0x18] = 0xbf;
        local_44 = 0x29236269;
        if (*piVar15 == -1) {
          uVar11 = 0xffffffff;
          extraout_ECX[0x145c] = '\0';
          extraout_ECX[0x145d] = '\0';
          extraout_ECX[0x145e] = '\0';
          extraout_ECX[0x145f] = '\0';
          extraout_ECX[0x1460] = -0x18;
          extraout_ECX[0x1461] = '\x03';
          extraout_ECX[0x1462] = '\0';
          extraout_ECX[0x1463] = '\0';
          pcVar13 = &DAT_0097f804;
          do {
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            cVar2 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar2 != '\0');
          if ((~uVar11 - 1 < 4) || (DAT_0097f805 == ':')) {
LAB_0086b49e:
            piVar14 = &local_348;
          }
          else {
            GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_348,0x104);
            iVar4 = FUN_0087cf51();
            piVar14 = (int *)(iVar4 + 1);
            if (iVar4 == 0) goto LAB_0086b49e;
          }
          uVar11 = 0xffffffff;
          hTemplateFile = (undefined1 *)0x0;
          pcVar13 = &DAT_0097f804;
          do {
            pcVar21 = pcVar13;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pcVar21 = pcVar13 + 1;
            cVar2 = *pcVar13;
            pcVar13 = pcVar21;
          } while (cVar2 != '\0');
          uVar11 = ~uVar11;
          DVar25 = 0x80000080;
          DVar3 = 2;
          piVar16 = (int *)(pcVar21 + -uVar11);
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *piVar14 = *piVar16;
            piVar16 = piVar16 + 1;
            piVar14 = piVar14 + 1;
          }
          p_Var24 = (LPSECURITY_ATTRIBUTES)0x0;
          DVar23 = 1;
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(char *)piVar14 = (char)*piVar16;
            piVar16 = (int *)((int)piVar16 + 1);
            piVar14 = (int *)((int)piVar14 + 1);
          }
          pvVar26 = CreateFileA((LPCSTR)&local_348,0xc0000000,DVar23,p_Var24,DVar3,DVar25,
                                hTemplateFile);
          *piVar15 = (int)pvVar26;
          if (pvVar26 != (HANDLE)0xffffffff) {
            GetLocalTime((LPSYSTEMTIME)(extraout_ECX + 0x1040));
            FUN_00875010();
            FUN_00879f55();
            uVar11 = 0xffffffff;
            pcVar13 = extraout_ECX + 0x40;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar13;
              pcVar13 = pcVar13 + 1;
            } while (cVar2 != '\0');
            pcVar13 = (char *)(~uVar11 - 1);
            if (*(int *)(extraout_ECX + 0x1460) == 999) {
              pcVar13 = (char *)0x0;
            }
            if (*(int *)(extraout_ECX + 0x145c) == 0) {
              uVar1 = *(ushort *)(extraout_ECX + 0x104e);
              DVar3 = GetTickCount();
              uVar11 = ((uint)*(ushort *)(extraout_ECX + 0x104a) +
                       DVar3 + uVar1 + (uint)*(ushort *)(extraout_ECX + 0x104c)) *
                       ((uint)*(ushort *)(extraout_ECX + 0x1046) *
                        (uint)*(ushort *)(extraout_ECX + 0x1042) *
                        (uint)((LPSYSTEMTIME)(extraout_ECX + 0x1040))->wYear * (uint)uVar1 + 1) &
                       0xffff | 0xec000000;
              *(uint *)(extraout_ECX + 0x1050) = (uVar11 % 10 ^ 0x55) << 0x10 | uVar11;
              GetTickCount();
              FUN_0087ad78();
              iVar4 = 0;
              do {
                iVar8 = _rand();
                local_b8[iVar4] = (byte)iVar8;
                iVar4 = iVar4 + 1;
              } while (iVar4 < 0x10);
              FUN_008748d0();
              BVar5 = CryptAcquireContextA
                                ((HCRYPTPROV *)&stack0xfffffff0,(LPCSTR)0x0,
                                 s_Microsoft_Base_Cryptographic_Pro_0096de70,0,0xf0000000);
              if (BVar5 != 0) {
                HVar27 = 0;
                BVar5 = CryptImportKey(0,&local_70,0x54,0,0,(HCRYPTKEY *)&stack0xffffffe8);
                if (BVar5 != 0) {
                  CryptEncrypt(HVar27,0,1,0,(BYTE *)0x0,(DWORD *)&stack0xfffffff8,0);
                  local_74 = 0xcced00;
                  WriteFile((HANDLE)*piVar15,&local_74,4,(LPDWORD)&stack0xfffffff8,(LPOVERLAPPED)0x0
                           );
                  iVar4 = 0;
                  do {
                    local_c8[iVar4] = local_b8[iVar4] ^ local_5d[iVar4];
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < 0x10);
                  lpNumberOfBytesWritten = (LPDWORD)&stack0xfffffff8;
                  WriteFile((HANDLE)*piVar15,local_c8,0x10,lpNumberOfBytesWritten,(LPOVERLAPPED)0x0)
                  ;
                  CryptDestroyKey((HCRYPTKEY)lpNumberOfBytesWritten);
                }
                CryptReleaseContext(0,0);
              }
              pcVar13 = extraout_ECX + 0x40;
              FUN_008749c0();
            }
            else if (0 < (int)pcVar13) {
              pbVar7 = (byte *)(extraout_ECX + 0x40);
              do {
                iVar4 = *(int *)(extraout_ECX + 0x145c);
                *(int *)(extraout_ECX + 0x145c) = iVar4 + 2;
                *pbVar7 = *pbVar7 ^ (char)(iVar4 + 2) + 0x43U;
                pbVar7 = pbVar7 + 1;
              } while ((int)(pbVar7 + (-0x1c - (int)piVar15)) < (int)pcVar13);
            }
            WriteFile((HANDLE)*piVar15,extraout_ECX + 0x40,(DWORD)pcVar13,(LPDWORD)&local_90,
                      (LPOVERLAPPED)0x0);
            hTemplateFile = &DAT_0000000a;
          }
        }
        hTemplateFile = hTemplateFile + 1;
      } while ((int)hTemplateFile < 10);
    }
  }
  FUN_00875010();
  FUN_0086cff0();
  FUN_00875080();
  FUN_0086cff0();
  FUN_0086ea60();
  FUN_0086eb40();
  FUN_00875080();
  FUN_0086cff0();
  FUN_0086d2f0();
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_009640e8;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  uVar11 = 0xffffffff;
  pcVar13 = extraout_ECX + 0x2b10;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  pcVar13 = (char *)FUN_00875080();
  uVar11 = 0xffffffff;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  iVar4 = FUN_0087cfc3();
  if (iVar4 == -1) {
    FUN_0086d340();
    uVar11 = 0xffffffff;
    pcVar13 = &DAT_009640e8;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = local_240;
    do {
      pcVar19 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar19 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar2 != '\0');
    pcVar13 = pcVar21 + -uVar11;
    pcVar21 = pcVar19 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar13 = extraout_ECX + 0x2b10;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = local_240;
    do {
      pcVar19 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar19 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar2 != '\0');
    pcVar13 = pcVar21 + -uVar11;
    pcVar21 = pcVar19 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    pcVar13 = (char *)FUN_00875080();
    uVar11 = 0xffffffff;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = local_240;
    do {
      pcVar19 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar19 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar2 != '\0');
    pcVar13 = pcVar21 + -uVar11;
    pcVar21 = pcVar19 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
  }
  cVar2 = FUN_00873350();
  if (cVar2 != '\0') {
    FUN_00875080();
    cVar2 = FUN_00873a60();
    if (cVar2 != '\0') {
      FUN_00875010();
      FUN_00875010();
      FUN_00875080();
      FUN_00875740();
      FUN_00875080();
      DAT_0097fc60 = FUN_008756d0();
      iVar4 = FUN_0087cd32();
      if (iVar4 == 0) {
        FUN_00875080();
        DAT_0096d71c = FUN_008756d0();
        FUN_00875080();
        DAT_0097fb38 = FUN_008756d0();
      }
    }
  }
  if (extraout_ECX[0x2b8c] != '\0') {
    FUN_00870730();
  }
  iVar4 = FUN_0086dd80();
  if (iVar4 == 0) {
    FUN_00875080();
    FUN_0086cff0();
    if (DAT_0097fb50 == 0) {
      return (char *)0x73;
    }
  }
  iVar4 = FUN_0086dea0();
  if ((iVar4 == 0) && (DAT_0097fb50 == 0)) {
    pCVar6 = (LPCSTR)FUN_00875080();
    pvVar26 = OpenEventA(0x100002,0,pCVar6);
    if (pvVar26 == (HANDLE)0x0) {
      return (char *)0x6e;
    }
    DVar3 = WaitForSingleObject(pvVar26,0);
    if (DVar3 == 0x102) {
      SetEvent(pvVar26);
      CloseHandle(pvVar26);
    }
    iVar4 = FUN_0086dea0();
    if (iVar4 == 0) {
      return (char *)0x6e;
    }
    FUN_00875080();
    FUN_0086cff0();
  }
  DVar3 = GetTickCount();
  local_74 = DVar3 & 0xfff00000;
  if ((DAT_0097fb50 == 0) && (DAT_0097fb4c == 0)) {
    FUN_00870f10();
  }
  local_a8.nLength = 0xc;
  local_a8.lpSecurityDescriptor = (LPVOID)0x0;
  local_a8.bInheritHandle = 1;
  pvVar26 = CreateEventA(&local_a8,0,0,(LPCSTR)0x0);
  *(HANDLE *)(extraout_ECX + 0x2b88) = pvVar26;
  if (pvVar26 == (HANDLE)0x0) {
    GetLastError();
    GetLastError();
LAB_0086bcd4:
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0xab;
  }
  pvVar26 = CreateEventA(&local_a8,1,0,(LPCSTR)0x0);
  *(HANDLE *)(extraout_ECX + 0x18) = pvVar26;
  if (pvVar26 == (HANDLE)0x0) {
    GetLastError();
    GetLastError();
    goto LAB_0086bcd4;
  }
  pvVar26 = CreateEventA(&local_a8,0,0,(LPCSTR)0x0);
  *(HANDLE *)(extraout_ECX + 0x2b84) = pvVar26;
  if (pvVar26 == (HANDLE)0x0) {
    GetLastError();
    GetLastError();
    goto LAB_0086bcd4;
  }
  FUN_00875080();
  FUN_0086cff0();
  FUN_0086d340();
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_009640e8;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_44c;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  pcVar13 = (char *)FUN_00875080();
  uVar11 = 0xffffffff;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_44c;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  iVar4 = FUN_0087cfc3();
  if (iVar4 == -1) {
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x99;
  }
  cVar2 = FUN_00873350();
  if (cVar2 == '\0') {
    param_1 = (char *)((uint)param_1 & 0xffffff);
    if ((*(int *)(extraout_ECX + 0x2b08) == 8) && (DVar3 = GetLastError(), DVar3 == 0x80090006)) {
      param_1 = (char *)CONCAT13(1,param_1._0_3_);
    }
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    pvVar26 = CreateFileA(local_44c,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (pvVar26 == (HANDLE)0xffffffff) {
      GetLastError();
      FUN_00875080();
      FUN_0086cff0();
    }
    else {
      GetFileSize(pvVar26,(LPDWORD)0x0);
      FUN_00875080();
      FUN_0086cff0();
      SetFilePointer(pvVar26,-4,(PLONG)0x0,2);
      ReadFile(pvVar26,&stack0xfffffff0,4,(LPDWORD)&local_90,(LPOVERLAPPED)0x0);
      FUN_00875080();
      FUN_0086cff0();
      CloseHandle(pvVar26);
    }
    if (param_1._3_1_ == '\0') {
LAB_0086bf6d:
      FUN_00875080();
      FUN_0086cff0();
      return (char *)0x7c;
    }
    if (((extraout_ECX[0x2b79] != '\0') || (cVar2 = FUN_0086fab0(), cVar2 == '\0')) ||
       ((cVar2 = FUN_00873350(), cVar2 == '\0' &&
        ((*(int *)(extraout_ECX + 0x2b08) == 8 && (DVar3 = GetLastError(), DVar3 == 0x80090006))))))
    {
      return (char *)0x9b;
    }
    FUN_00875080();
    cVar2 = '\0';
    FUN_0086cff0();
    if (cVar2 != '\0') goto LAB_0086bf6d;
  }
  FUN_00875080();
  FUN_0086cff0();
  p_Var20 = &local_13c;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    p_Var20->cb = 0;
    p_Var20 = (_STARTUPINFOA *)&p_Var20->lpReserved;
  }
  local_84.hProcess = (HANDLE)0x0;
  local_84.hThread = (HANDLE)0x0;
  local_13c.cb = 0x44;
  local_84.dwProcessId = 0;
  local_84.dwThreadId = 0;
  pCVar6 = (LPCSTR)FUN_00875080();
  wsprintfA(local_54c,pCVar6);
  FUN_00875080();
  FUN_0086cff0();
  param_1 = (char *)FUN_00874f70();
  uVar11 = 0xffffffff;
  pCVar17 = local_94c;
  pcVar13 = local_54c;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  FUN_00875080();
  FUN_0086cff0();
  HVar9 = ~uVar11 + 3;
  if (0 < (int)HVar9) {
    do {
      param_1 = param_1 + 1;
      iVar4 = wsprintfA(pCVar17,s__x_02x_0096dbb4);
      pCVar17 = pCVar17 + iVar4;
      HVar9 = HVar9 - 1;
    } while (HVar9 != 0);
  }
  *pCVar17 = '\0';
  FUN_00875080();
  FUN_0086cff0();
  if (DAT_0097fb50 == 0) {
    BVar5 = CreateProcessA(local_44c,local_94c,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                           ,1,0,(LPVOID)0x0,(LPCSTR)0x0,&local_13c,&local_84);
    if (BVar5 == 0) {
      GetLastError();
      GetLastError();
      goto LAB_0086ca9e;
    }
    FUN_00875080();
    FUN_0086cff0();
    local_94 = *(HANDLE *)(extraout_ECX + 0x2b88);
    param_1 = (char *)0x0;
    local_90 = local_84.hProcess;
    DVar3 = WaitForMultipleObjects(2,&local_94,0,0xffffffff);
    if (DVar3 != 0) {
      BVar5 = GetExitCodeProcess(local_84.hProcess,(LPDWORD)&param_1);
      if (BVar5 == 0) {
        GetLastError();
        FUN_00875080();
        FUN_0086cff0();
      }
      FUN_00875080();
      FUN_0086cff0();
      CloseHandle(local_84.hProcess);
      CloseHandle(local_84.hThread);
      return param_1;
    }
    FUN_00875080();
    FUN_0086cff0();
    FUN_0086f510();
  }
  CloseHandle(local_84.hProcess);
  CloseHandle(local_84.hThread);
  FUN_0086d2f0();
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_009640e8;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  uVar11 = 0xffffffff;
  pcVar13 = extraout_ECX + 0x2b10;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  pcVar13 = (char *)FUN_00875080();
  uVar11 = 0xffffffff;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = local_240;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  cVar2 = FUN_00873350();
  if (cVar2 == '\0') {
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x78;
  }
  FUN_00875080();
  cVar2 = FUN_00873a60();
  if (cVar2 == '\0') {
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x82;
  }
  FUN_00875010();
  FUN_00875010();
  FUN_00875080();
  FUN_00875740();
  iVar4 = FUN_0087cd32();
  if (iVar4 != 0) {
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x8e;
  }
  FUN_00875080();
  DAT_0096d71c = FUN_008756d0();
  FUN_00875080();
  DAT_0097fb30 = FUN_008756d0();
  FUN_00875080();
  DAT_0097fb34 = FUN_008756d0();
  FUN_00875080();
  FUN_008756d0();
  FUN_00875080();
  param_1 = (char *)FUN_008756d0();
  FUN_00875080();
  DAT_0097fb38 = FUN_008756d0();
  FUN_00875080();
  local_74 = FUN_008756d0();
  FUN_00875080();
  uVar11 = FUN_008756d0();
  extraout_ECX[0x22] = ~(byte)(uVar11 >> 1) & 1;
  FUN_00875080();
  uVar10 = FUN_008756d0();
  *(undefined4 *)(extraout_ECX + 0x2b7c) = uVar10;
  FUN_00875080();
  uVar10 = FUN_008756d0();
  *(undefined4 *)(extraout_ECX + 0x2b80) = uVar10;
  FUN_00875080();
  FUN_00875740();
  puVar18 = local_114c;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
  }
  FUN_00875080();
  FUN_0086cff0();
  FUN_0086d2f0();
  uVar11 = 0xffffffff;
  pcVar13 = &DAT_009640e8;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = (char *)&DAT_0097fa18;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  pcVar13 = (char *)FUN_00875080();
  uVar11 = 0xffffffff;
  do {
    pcVar21 = pcVar13;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar21 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar21;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11;
  iVar4 = -1;
  pcVar13 = (char *)&DAT_0097fa18;
  do {
    pcVar19 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar19 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar19;
  } while (cVar2 != '\0');
  pcVar13 = pcVar21 + -uVar11;
  pcVar21 = pcVar19 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar21 = pcVar21 + 4;
  }
  bVar22 = DAT_0097fc64 != 0;
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar21 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar21 = pcVar21 + 1;
  }
  if (bVar22) {
    FUN_00875080();
    FUN_0086cff0();
    if (DAT_0097fc64 != 0) {
      FUN_00875080();
      FUN_0086cff0();
    }
  }
  FUN_00875080();
  FUN_0086cff0();
  iVar4 = FUN_0087cfc3();
  if (iVar4 == -1) {
    FUN_0086d2f0();
    uVar11 = 0xffffffff;
    pcVar13 = &DAT_009640e8;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = (char *)&DAT_0097fa18;
    do {
      pcVar19 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar19 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar2 != '\0');
    pcVar13 = pcVar21 + -uVar11;
    pcVar21 = pcVar19 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    pcVar13 = (char *)FUN_00875080();
    uVar11 = 0xffffffff;
    do {
      pcVar21 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar21 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar21;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar4 = -1;
    pcVar13 = (char *)&DAT_0097fa18;
    do {
      pcVar19 = pcVar13;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar19 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar19;
    } while (cVar2 != '\0');
    pcVar13 = pcVar21 + -uVar11;
    pcVar21 = pcVar19 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar21 = pcVar21 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar21 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar21 = pcVar21 + 1;
    }
    iVar4 = FUN_0087cfc3();
    if (iVar4 == -1) {
      FUN_00875080();
      FUN_0086cff0();
      return (char *)0x9a;
    }
  }
  cVar2 = FUN_00873350();
  if (cVar2 == '\0') {
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x7a;
  }
  FUN_00875080();
  FUN_0086cff0();
  cVar2 = FUN_00874150();
  if (cVar2 == '\0') {
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0xa0;
  }
  SetThreadPriority(*(HANDLE *)(extraout_ECX + 0x1468),2);
  FUN_00875080();
  FUN_0086cff0();
  GetTickCount();
  FUN_00873db0();
  FUN_00873da0();
  pCVar6 = (LPCSTR)FUN_00875080();
  local_44 = 0x86c8f0;
  wsprintfA(local_54c,pCVar6);
  local_84.hProcess = (HANDLE)0x0;
  p_Var20 = &local_13c;
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    p_Var20->cb = 0;
    p_Var20 = (_STARTUPINFOA *)&p_Var20->lpReserved;
  }
  local_84.hThread = (HANDLE)0x0;
  local_84.dwProcessId = 0;
  local_13c.cb = 0x44;
  local_84.dwThreadId = 0;
  ResetEvent(*(HANDLE *)(extraout_ECX + 0x2b88));
  param_1 = (char *)FUN_00874f70();
  uVar11 = 0xffffffff;
  pCVar17 = local_94c;
  pcVar13 = local_54c;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  if (0 < (int)(~uVar11 + 3)) {
    do {
      param_1 = param_1 + 1;
      pcVar13 = s__x_02x_0096dbb4;
      iVar4 = wsprintfA(pCVar17,s__x_02x_0096dbb4);
      pCVar17 = pCVar17 + iVar4;
    } while (pcVar13 != (char *)0x1);
  }
  *pCVar17 = '\0';
  FUN_00875080();
  FUN_0086cff0();
  if (DAT_0097fb4c == 0) {
    if (DAT_0097fb50 == 0) {
      BVar5 = CreateProcessA((LPCSTR)&DAT_0097fa18,local_94c,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,0,4,(LPVOID)0x0,(LPCSTR)0x0,&local_13c,
                             &local_84);
      if (BVar5 == 0) {
        GetLastError();
        GetLastError();
        goto LAB_0086ca9e;
      }
      FUN_00875080();
      FUN_0086cff0();
    }
    else {
      uVar11 = 0xffffffff;
      param_1 = local_33c;
      pcVar13 = local_94c;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      local_344 = 0x7eb;
      local_340 = *(undefined4 *)(extraout_ECX + 0x2b0c);
      uVar12 = 0xffffffff;
      pcVar13 = local_94c;
      do {
        pcVar21 = pcVar13;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar21 = pcVar13 + 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar21;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      local_348 = ~uVar11 + 0xc;
      pcVar13 = pcVar21 + -uVar12;
      pcVar21 = param_1;
      for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar21 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar21 = pcVar21 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar21 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar21 = pcVar21 + 1;
      }
      iVar4 = FUN_00870890();
      if (iVar4 == 0) {
        GetLastError();
        GetLastError();
LAB_0086ca9e:
        FUN_00875080();
        FUN_0086cff0();
        return (char *)0xaa;
      }
    }
  }
  DAT_0097fb48 = DAT_0097fb34;
  if (((DAT_0097fb34 == 0) && (DAT_0097fb48 = local_74, local_74 == 0)) &&
     (DAT_0097fb48 = DAT_0097fb50, DAT_0097fb50 == 0)) {
    uVar11 = FUN_0086f300();
    DAT_0097fb48 = uVar11 & 0xff;
  }
  FUN_00875080();
  FUN_0086cff0();
  iVar4 = FUN_00874360();
  if (iVar4 == 0) {
    GetLastError();
    GetLastError();
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0xa0;
  }
  FUN_00875080();
  FUN_0086cff0();
  if ((DAT_0097fb4c == 0) && (DAT_0097fb50 == 0)) {
    ResumeThread(local_84.hThread);
    local_94 = *(HANDLE *)(extraout_ECX + 0x2b84);
    local_90 = local_84.hProcess;
    DVar3 = WaitForMultipleObjects(2,&local_94,0,DAT_0097fb30);
    if (DVar3 == 0) goto LAB_0086cc7b;
    pCVar6 = (LPCSTR)FUN_00875080();
    pvVar26 = OpenEventA(0x100000,0,pCVar6);
    if (pvVar26 == (HANDLE)0x0) goto LAB_0086cc5b;
    CloseHandle(pvVar26);
    DVar3 = WaitForSingleObject(*(HANDLE *)(extraout_ECX + 0x2b84),DAT_0097fb30);
  }
  else {
    DVar3 = WaitForSingleObject(*(HANDLE *)(extraout_ECX + 0x2b84),DAT_0097fb30);
  }
  if (DVar3 != 0) {
LAB_0086cc5b:
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x72;
  }
LAB_0086cc7b:
  FUN_00875080();
  FUN_0086cff0();
  DVar3 = WaitForSingleObject(*(HANDLE *)(extraout_ECX + 0x2b88),0);
  if (DVar3 != 0) {
    FUN_00875080();
    FUN_0086cff0();
    return (char *)0x72;
  }
  pCVar6 = (LPCSTR)FUN_00875080();
  pvVar26 = OpenEventA(0x100000,0,pCVar6);
  if (pvVar26 == (HANDLE)0x0) {
    DAT_0097fb54 = local_84.dwProcessId;
    DAT_0097fb58 = local_84.hProcess;
  }
  else {
    CloseHandle(pvVar26);
    FUN_00875080();
    FUN_0086cff0();
  }
  FUN_00875080();
  FUN_0086cff0();
  if (DAT_0097fb48 != 0) {
    FUN_008707a0();
    iVar4 = FUN_0086ed50();
    if (iVar4 == 0) {
      FUN_0086e010();
    }
    FUN_00875080();
    FUN_0086cff0();
    iVar4 = FUN_0086f090();
    if (iVar4 == 0) {
      FUN_00874040();
    }
    FUN_00875080();
    FUN_0086cff0();
    if ((extraout_ECX[0x22] != '\0') && (cVar2 = FUN_0086d810(), cVar2 == '\0')) {
      FUN_00875080();
      FUN_0086cff0();
      return (char *)0xdc;
    }
    FUN_00875080();
    FUN_0086cff0();
    FUN_00874040();
    FUN_00874040();
    FUN_00875080();
    FUN_0086cff0();
    *extraout_ECX = '\x01';
    return (char *)0x755;
  }
  return (char *)0x7a;
}



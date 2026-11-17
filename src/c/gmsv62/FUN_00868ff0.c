/* FUN_00868ff0 - 0x00868ff0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00868ff0(void)

{
  char cVar1;
  HKEY pHVar2;
  UCHAR UVar3;
  BOOL BVar4;
  HKEY pHVar5;
  LSTATUS LVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  GUID *pGVar11;
  short sVar12;
  UCHAR *pUVar13;
  _NCB *p_Var14;
  char *pcVar15;
  char *pcVar16;
  UCHAR *pUVar17;
  HKEY__ *pHVar18;
  HKEY local_9b8;
  GUID local_9b4;
  DWORD local_9a4;
  DWORD local_9a0;
  _NCB local_99c;
  DWORD local_95c;
  HKEY__ local_958;
  int local_954;
  int local_950;
  int local_94c;
  HKEY__ local_858 [2];
  char local_850;
  CHAR local_600 [3];
  undefined1 local_5fd;
  CHAR local_400 [512];
  CHAR local_200 [512];
  
  local_9b4.Data2._0_1_ = 0;
  local_9b4.Data2._1_1_ = 0;
  local_9b4.Data3 = 0;
  local_9b4.Data4[0] = '\0';
  local_9b4.Data4[1] = '\0';
  local_9b4.Data4[2] = '\0';
  local_9b4.Data4[3] = '\0';
  local_9b4.Data4[4] = '\0';
  local_9b4.Data4[5] = '\0';
  local_9b4.Data4[6] = '\0';
  p_Var14 = &local_99c;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var14->ncb_command = '\0';
    p_Var14->ncb_retcode = '\0';
    p_Var14->ncb_lsn = '\0';
    p_Var14->ncb_num = '\0';
    p_Var14 = (_NCB *)&p_Var14->ncb_buffer;
  }
  local_99c.ncb_buffer = (PUCHAR)&local_958;
  local_9b4.Data1 = 0;
  local_9b4.Data4[7] = '\0';
  local_958.unused = local_958.unused & 0xffffff00;
  local_99c.ncb_command = '7';
  local_99c.ncb_length = 0x100;
  Netbios(&local_99c);
  iVar7 = 0;
  if ((char)local_958.unused != '\0') {
    do {
      p_Var14 = &local_99c;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        p_Var14->ncb_command = '\0';
        p_Var14->ncb_retcode = '\0';
        p_Var14->ncb_lsn = '\0';
        p_Var14->ncb_num = '\0';
        p_Var14 = (_NCB *)&p_Var14->ncb_buffer;
      }
      local_99c.ncb_command = '2';
      local_99c.ncb_lana_num = (UCHAR)iVar7;
      UVar3 = Netbios(&local_99c);
      if (UVar3 == '\0') {
        p_Var14 = &local_99c;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          p_Var14->ncb_command = '\0';
          p_Var14->ncb_retcode = '\0';
          p_Var14->ncb_lsn = '\0';
          p_Var14->ncb_num = '\0';
          p_Var14 = (_NCB *)&p_Var14->ncb_buffer;
        }
        uVar9 = 0xffffffff;
        pcVar15 = (char *)&DAT_009645b0;
        do {
          pcVar16 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar16 = pcVar15 + 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        local_99c.ncb_command = '3';
        pUVar13 = (UCHAR *)(pcVar16 + -uVar9);
        pUVar17 = local_99c.ncb_callname;
        local_99c.ncb_lana_num = (UCHAR)iVar7;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pUVar17 = *(undefined4 *)pUVar13;
          pUVar13 = pUVar13 + 4;
          pUVar17 = pUVar17 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pUVar17 = *pUVar13;
          pUVar13 = pUVar13 + 1;
          pUVar17 = pUVar17 + 1;
        }
        pHVar18 = local_858;
        for (iVar8 = 0x96; iVar8 != 0; iVar8 = iVar8 + -1) {
          pHVar18->unused = 0;
          pHVar18 = pHVar18 + 1;
        }
        local_99c.ncb_buffer = (PUCHAR)local_858;
        local_99c.ncb_length = 600;
        UVar3 = Netbios(&local_99c);
        if (UVar3 == '\0') {
          if ((local_850 == -2) || (local_850 == -1)) {
            local_9b4.Data1 = local_858[0].unused;
            local_9b4.Data2._0_1_ = (undefined1)(undefined2)local_858[1].unused;
            local_9b4.Data2._1_1_ = (undefined1)((ushort)(undefined2)local_858[1].unused >> 8);
          }
          else if (local_850 != '\0') {
            local_9b4.Data1 = CONCAT31(local_9b4.Data1._1_3_,local_850);
          }
          break;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(local_958.unused & 0xffU));
  }
  GetWindowsDirectoryA(local_600,0x200);
  local_5fd = 0;
  BVar4 = GetVolumeInformationA
                    (local_600,local_400,0x200,&local_9a4,&local_9a0,&local_95c,local_200,0x200);
  pHVar2 = local_9b8;
  if (BVar4 == 1) {
    local_9b4.Data3 = (ushort)local_9a4;
    local_9b4.Data4[0] = (uchar)(local_9a4 >> 0x10);
    local_9b4.Data4[1] = (uchar)(local_9a4 >> 0x18);
  }
  sVar12 = 0;
  iVar7 = 0;
  pGVar11 = &local_9b4;
  do {
    sVar12 = sVar12 + ((short)iVar7 + 3) * (short)pGVar11->Data1;
    iVar7 = iVar7 + 1;
    pGVar11 = (GUID *)((int)&pGVar11->Data1 + 2);
  } while (iVar7 < 6);
  local_9b4.Data4[6] = (uchar)sVar12;
  local_9b4.Data4[7] = (uchar)((ushort)sVar12 >> 8);
  local_9b8[5].unused = local_9b4.Data1;
  local_9b8[6].unused =
       CONCAT22(local_9b4.Data3,CONCAT11(local_9b4.Data2._1_1_,(undefined1)local_9b4.Data2));
  local_9b8[7].unused =
       CONCAT22(local_9b4.Data4._2_2_,CONCAT11(local_9b4.Data4[1],local_9b4.Data4[0]));
  local_9b8[8].unused =
       CONCAT13(local_9b4.Data4[7],
                CONCAT12(local_9b4.Data4[6],CONCAT11(local_9b4.Data4[5],local_9b4.Data4[4])));
  local_9b4.Data4._6_2_ = sVar12;
  RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Microsoft_Windows_Curre_0096d010,0,3,&local_9b8);
  if (local_9b8 != (HKEY)0x0) {
    local_9a4 = 0x100;
    LVar6 = RegQueryValueExA(local_9b8,s_CxSupportId_0096d004,(LPDWORD)0x0,&local_9a0,
                             (LPBYTE)&local_958,&local_9a4);
    if ((LVar6 == 0) && (local_9a4 == 0x10)) {
      pHVar2[1].unused = local_958.unused;
      pHVar2[2].unused = local_954;
      pHVar2[3].unused = local_950;
      pHVar2[4].unused = local_94c;
    }
    else {
      CoCreateGuid(&local_9b4);
      RegSetValueExA(local_9b8,s_CxSupportId_0096d004,0,3,(BYTE *)&local_9b4,0x10);
      pHVar2[1].unused = local_9b4.Data1;
      pHVar2[2].unused =
           CONCAT22(local_9b4.Data3,CONCAT11(local_9b4.Data2._1_1_,(undefined1)local_9b4.Data2));
      pHVar2[3].unused =
           CONCAT22(local_9b4.Data4._2_2_,CONCAT11(local_9b4.Data4[1],local_9b4.Data4[0]));
      pHVar2[4].unused =
           CONCAT13(local_9b4.Data4[7],
                    CONCAT12(local_9b4.Data4[6],CONCAT11(local_9b4.Data4[5],local_9b4.Data4[4])));
    }
    RegCloseKey(local_9b8);
    return;
  }
  pHVar5 = pHVar2 + 1;
  do {
    *(char *)&pHVar5->unused = (char)pHVar5[4].unused;
    pHVar5 = (HKEY)((int)&pHVar5->unused + 1);
  } while ((int)((-4 - (int)pHVar2) + (int)pHVar5) < 0x10);
  return;
}


